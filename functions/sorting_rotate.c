/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:27:50 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:27:50 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include "../headers/internal.h"

void	rx(t_stack **x)
{
	if ((*x)->next == NULL)
		return ;
	*x = (*x)->next;
}

void	ra(t_stack_data *a)
{
	rx(a->top);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack_data *b)
{
	rx(b->top);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack_data *a, t_stack_data *b)
{
	rx(a->top);
	rx(b->top);
	ft_putstr_fd("rr\n", 1);
}
