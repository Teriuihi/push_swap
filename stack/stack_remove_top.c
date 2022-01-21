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

void	ft_stack_remove_top(t_stack **top)
{
	if ((*top)->next == NULL)
	{
		*top = NULL;
		return ;
	}
	(*top)->next->prev = (*top)->prev;
	(*top)->prev->next = (*top)->next;
}
