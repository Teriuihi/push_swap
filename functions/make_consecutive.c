/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_consecutive.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 19:14:54 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 19:14:54 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"
#include <limits.h>

t_stack	*next_closest(t_stack **top, int prev, int negative)
{
	t_stack	*tmp;
	t_stack	*closest;

	closest = NULL;
	tmp = (*top);
	if ((negative && tmp->value <= prev && (closest == NULL
				|| tmp->value > closest->value))
		|| (!negative && tmp->value >= prev && (closest == NULL
				|| tmp->value < closest->value)))
		closest = tmp;
	tmp = tmp->next;
	while (tmp != *top)
	{
		if ((negative && tmp->value <= prev && (closest == NULL
					|| tmp->value > closest->value))
			|| (!negative && tmp->value >= prev && (closest == NULL
					|| tmp->value < closest->value)))
			closest = tmp;
		tmp = tmp->next;
	}
	return (closest);
}

void	make_positive_consecutive(t_stack **top)
{
	t_stack	*iterator;
	t_stack	*tmp;
	int		prev;

	prev = 0;
	iterator = *top;
	tmp = next_closest(top, prev, 0);
	if (tmp == NULL)
		return ;
	tmp->value = prev;
	prev++;
	iterator = iterator->next;
	while (iterator != *top)
	{
		tmp = next_closest(top, prev, 0);
		if (tmp == NULL)
			break ;
		tmp->value = prev;
		prev++;
		iterator = iterator->next;
	}
}

void	make_negative_consecutive(t_stack **top)
{
	t_stack	*iterator;
	t_stack	*tmp;
	int		prev;

	prev = -1;
	iterator = *top;
	tmp = next_closest(top, prev, -1);
	if (tmp == NULL)
		return ;
	tmp->value = prev;
	prev--;
	iterator = iterator->next;
	while (iterator != *top)
	{
		tmp = next_closest(top, prev, -1);
		if (tmp == NULL)
			break ;
		tmp->value = prev;
		prev--;
		iterator = iterator->next;
	}
}

void	make_zero_to_max(t_stack **top)
{
	int		low;
	t_stack	*tmp;

	low = INT_MAX;
	tmp = *top;
	if (tmp->value < low)
		low = tmp->value;
	tmp = tmp->next;
	while (tmp != *top)
	{
		if (tmp->value < low)
			low = tmp->value;
		tmp = tmp->next;
	}
	low *= -1;
	tmp = *top;
	tmp->value += low;
	tmp = tmp->next;
	while (tmp != *top)
	{
		tmp->value += low;
		tmp = tmp->next;
	}
}

void	make_consecutive(t_stack_data *x)
{
	if (x->len <= 2)
		return ;
	make_negative_consecutive(x->top);
	make_positive_consecutive(x->top);
	make_zero_to_max(x->top);
}
