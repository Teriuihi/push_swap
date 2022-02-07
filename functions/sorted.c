/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorted.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 19:44:26 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 19:44:26 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../headers/internal.h"

int	is_sorted_stack(t_stack *stack, int len)
{
	int		last;

	last = INT_MIN;
	while (len)
	{
		if (last > stack->value)
			return (0);
		last = stack->value;
		stack = stack->next;
		len--;
	}
	return (1);
}

int	ft_is_sorted(t_stack_data *x)
{
	if (x->len <= 1)
		return (1);
	return (is_sorted_stack(*x->top, x->len));
}

int	ft_is_ordered(t_stack_data *x)
{
	t_stack	*tmp;

	tmp = *x->top;
	while (tmp->value != 0)
		tmp = tmp->next;
	return (is_sorted_stack(tmp, x->len));
}
