/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_remove_top.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 21:44:36 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 21:44:36 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

t_stack	*ft_stack_remove_top(t_stack **top)
{
	t_stack	*tmp;

	tmp = *top;
	if (tmp->next == NULL || tmp->next->value == tmp->value)
	{
		tmp->next = NULL;
		tmp->prev = NULL;
		*top = NULL;
		return (tmp);
	}
	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	*top = tmp->next;
	tmp->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}
