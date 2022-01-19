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

int	ft_is_sorted(t_stack **top)
{
	t_stack	*tmp;
	int		last;

	last = INT_MIN;
	tmp = *top;
	if (last > tmp->value)
		return (0);
	last = tmp->value;
	tmp = tmp->next;
	while (tmp != *top)
	{
		if (last > tmp->value)
			return (0);
		last = tmp->value;
		tmp = tmp->next;
	}
	return (1);
}
