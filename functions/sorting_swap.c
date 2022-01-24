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
	t_stack	*old_top;
	t_stack	*new_top;
	t_stack	*old_prev;
	t_stack	*new_next;

	if ((*x)->next == NULL)
		return ;
	old_top = *x;
	new_top = (*x)->next;
	old_prev = (*x)->prev;
	new_next = new_top->next;
	new_top->next = old_top;
	old_top->prev = new_top;
	new_top->prev = old_prev;
	old_prev->next = new_top;
	new_next->prev = old_top;
	old_top->next = new_next;
	*x = new_top;
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
