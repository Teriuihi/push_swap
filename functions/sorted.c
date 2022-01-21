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

int	ft_is_sorted(t_stack_data *x)
{
	t_stack	*tmp;
	int		last;
	int		i;

	last = INT_MIN;
	i = x->len;
	tmp = *x->top;
	while (i)
	{
		if (last > tmp->value)
			return (0);
		last = tmp->value;
		tmp = tmp->next;
		i--;
	}
	return (1);
}
