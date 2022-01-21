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

/**
 * Find the most efficient way to rotate a stack the required amount of times
 * 	and execute those rotations
 *
 * @param	a	stack data for a
 * @param	rot	amount of rotations
 */
void	rotate(t_stack_data *a, int rot)
{
	if (a->len - rot < a->len / 2)
		rot = (a->len - rot) * -1;
	while (rot != 0)
	{
		if (rot > 0)
			ra(a);
		else
			rra(a);
		if (rot > 0)
			rot--;
		else
			rot++;
	}
}

void	fix(t_stack_data *a)
{
	t_stack	*cur;
	int		rot;

	rot = 0;
	cur = *a->top;
	while (cur->value != 0)
	{
		rot++;
		cur = cur->next;
	}
	rotate(a, rot);
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

	rot = 0;
	cur = (*a->top)->prev;
	while (!(cur->value < (*b->top)->value
			&& cur->next->value > (*b->top)->value))
	{
		rot++;
		cur = cur->next;
	}
	rotate(a, rot);
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
	while (a->len > 3)
		pb(a, b);
	small_sort(a);
	while (b->len != 0)
		top_b_to_a(a, b);
	fix(a);
}
