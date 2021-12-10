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

void	rrx(int *x, int x_len)
{
	int	tmp1;
	int	tmp2;
	int	i;

	if (x_len < 2)
		return ;
	i = 1;
	tmp1 = x[0];
	while (i < x_len)
	{
		tmp2 = x[i];
		x[i] = tmp1;
		tmp1 = tmp2;
		i++;
	}
	x[0] = tmp1;
}

void	rra(int *a, int a_len)
{
	rrx(a, a_len);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(int *b, int b_len)
{
	rrx(b, b_len);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(int *a, int a_len, int *b, int b_len)
{
	rrx(a, a_len);
	rrx(b, b_len);
	ft_putstr_fd("rrr\n", 1);
}
