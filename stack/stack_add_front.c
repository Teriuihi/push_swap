/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stackadd_front.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:40:07 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 17:40:07 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

/**
 * Add a new entry to the stack above the current top
 * 	and changes top to be the new entry
 *
 * @param	top	Current top
 * @param	new	New entry to add
 */
void	ft_stack_add_front(t_stack **top, t_stack *new)
{
	if (!top || !new)
		return ;
	ft_stack_add_back(top, new);
	if ((*top)->next != NULL)
		*top = (*top)->prev;
}
