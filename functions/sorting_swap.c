/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_swap.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:27:56 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:27:56 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include "../headers/internal.h"

void	sx(t_stack **x)
{
	t_stack	*tmp;

	if ((*x)->next == NULL)
		return ;
	tmp = (*x)->next;
	(*x)->prev->next = tmp;
	(*x)->next->prev = tmp;
	tmp->prev = (*x)->prev;
	(*x)->next = tmp->next;
	(*x)->prev = tmp;
	tmp->next = (*x);
	*x = tmp;
}

void	sa(t_stack_data *a)
{
	sx(a->top);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack_data *b)
{
	sx(b->top);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack_data *a, t_stack_data *b)
{
	sx(a->top);
	sx(b->top);
	ft_putstr_fd("ss\n", 1);
}
