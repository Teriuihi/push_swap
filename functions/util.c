/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   util.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 18:19:31 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 18:19:31 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

void	*util_free(void *ptr)
{
	free(ptr);
	return (NULL);
}

void	stack_free(t_stack_data *x)
{
	t_stack	*tmp;
	t_stack	*tmp_free;

	if (!x)
		return ;
	tmp = *x->top;
	while (x->len)
	{
		tmp_free = tmp;
		tmp = tmp->next;
		free(tmp_free);
		x->len--;
	}
	free(x->top);
	free(x);
}

/** todo move to util
 * Find the most efficient way to rotate a stack the required amount of times
 * 	and execute those rotations
 *
 * @param	x	stack data for x
 * @param	rot	amount of rotations
 */
void	rotate_stack(t_stack_data *x, int rot)
{
	if (x->len - rot < x->len / 2)
		rot = (x->len - rot) * -1;
	while (rot != 0)
	{
		if (rot > 0)
			ra(x);
		else
			rra(x);
		if (rot > 0)
			rot--;
		else
			rot++;
	}
}

/**
 * Move top to the right position (0)
 *
 * @param	a	stack data for a
 */
void	fix_stack_order(t_stack_data *a)
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
	rotate_stack(a, rot);
}
