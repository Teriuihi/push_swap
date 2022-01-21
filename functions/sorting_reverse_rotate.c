/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_reverse_rotate.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 19:44:40 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 19:44:40 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include "../headers/internal.h"

void	rrx(t_stack **x)
{
	if ((*x)->prev == NULL)
		return ;
	*x = (*x)->prev;
}

void	rra(t_stack_data *a)
{
	rrx(a->top);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack_data *b)
{
	rrx(b->top);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack_data *a, t_stack_data *b)
{
	rrx(a->top);
	rrx(b->top);
	ft_putstr_fd("rrr\n", 1);
}
