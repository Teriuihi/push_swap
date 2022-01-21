/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_push.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 19:44:23 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 19:44:23 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"
#include "../headers/libft.h"

int	px(t_stack_data *x1, t_stack_data *x2)
{
	if (x2->len == 0)
		return (0);
	ft_stack_add_front(x1->top, *x2->top);
	ft_stack_remove_top(x2->top);
	x1->len++;
	x2->len--;
	return (1);
}

int	pa(t_stack_data *a, t_stack_data *b)
{
	int	success;

	success = px(a, b);
	if (success)
		ft_putstr_fd("pa\n", 1);
	return (success);
}

int	pb(t_stack_data *a, t_stack_data *b)
{
	int	success;

	success = px(b, a);
	if (success)
		ft_putstr_fd("pb\n", 1);
	return (success);
}
