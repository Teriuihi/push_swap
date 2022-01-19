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

void	ft_stackadd_front(t_stack **top, t_stack *new)
{
	if (!top || !new)
		return ;
	new->next = *top;
	new->prev = (*top)->prev;
	(*top)->prev = new;
	*top = new;
}
