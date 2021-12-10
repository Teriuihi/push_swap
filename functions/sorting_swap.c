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

void	sx(int *x, int x_len)
{
	int	tmp;

	if (x_len < 2)
		return ;
	tmp = x[0];
	x[0] = x[1];
	x[1] = tmp;
}

void	sa(int *a, int a_len)
{
	sx(a, a_len);
	ft_putstr_fd("sa\n", 1);
}

void	sb(int *b, int b_len)
{
	sx(b, b_len);
	ft_putstr_fd("sb\n", 1);
}

void	ss(int *a, int a_len, int *b, int b_len)
{
	sx(a, a_len);
	sx(b, b_len);
	ft_putstr_fd("ss\n", 1);
}
