/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   med_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:31:32 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:31:32 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"
#include <limits.h>

int	get_bottom_val(t_stack_data *x)
{
	int		bottom;
	int		i;
	t_stack	*cur;

	bottom = INT_MAX;
	i = x->len;
	cur = *x->top;
	while (i)
	{
		if (bottom > cur->value)
			bottom = cur->value;
		cur = cur->next;
		i--;
	}
	return (bottom);
}

int	get_top_val(t_stack_data *x)
{
	int		top;
	int		i;
	t_stack	*cur;

	top = 0;
	i = x->len;
	cur = *x->top;
	while (i)
	{
		if (top < cur->value)
			top = cur->value;
		cur = cur->next;
		i--;
	}
	return (top);
}

/**
 * Move the top from b to a in the correct spot
 * 	The list is not guaranteed to remain in the same position
 *
 * @param	a	stack data for stack a
 * @param	b	stack data for stack b
 */
void	top_b_to_a(t_stack_data *a, t_stack_data *b)
{
	int		rot;
	t_stack	*cur;
	int		highest;
	int		lowest;

	rot = 0;
	cur = *a->top;
	lowest = get_bottom_val(a);
	highest = get_top_val(a);
	while (1)
	{
		if ((cur->prev->value == highest && (*b->top)->value > highest)
			|| (cur->prev->value == highest && (*b->top)->value < lowest)
			|| (cur->value > (*b->top)->value
				&& cur->prev->value < (*b->top)->value))
			break ;
		rot++;
		cur = cur->next;
	}
	rotate_stack(a, rot);
	pa(a, b);
}

/**
 * Should only be called on stack with 4-5 entries
 * Sort a small stack
 *
 * @param	a	stack data for stack a
 * @param	b	stack data for stack b
 */
void	med_sort(t_stack_data *a, t_stack_data *b)
{
	if (ft_is_sorted(a))
		return ;
	if (ft_is_ordered(a))
	{
		fix_stack_order(a);
		return ;
	}
	while (a->len > 3)
		pb(a, b);
	small_sort(a);
	while (b->len != 0)
		top_b_to_a(a, b);
	fix_stack_order(a);
}
