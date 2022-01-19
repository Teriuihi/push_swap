/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_add_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:56:30 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 17:56:30 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

/**
 * Add a new entry to the stack above the current top
 *
 * @param	top	Current top
 * @param	new	New entry to add
 */
void	ft_stack_add_back(t_stack **top, t_stack *new)
{
	if (!top || !new)
		return ;
	if (*top == NULL)
	{
		*top = new;
		return ;
	}
	if ((*top)->next == NULL)
	{
		(*top)->next = new;
		(*top)->prev = new;
		new->next = *top;
		new->prev = *top;
	}
	else
	{
		new->next = *top;
		new->prev = (*top)->prev;
		(*top)->prev->next = new;
		(*top)->prev = new;
	}
}
