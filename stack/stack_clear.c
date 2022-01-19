/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stackclear.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:51:47 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 17:51:47 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

/**
 * Clears all entries in the given t_stack
 *
 * @param	lst	The pointer to the start of the t_list to add the entry to
 * @param	del
 */
void	ft_stack_clear(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}
