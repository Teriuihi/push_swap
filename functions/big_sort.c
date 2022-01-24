/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   big_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 20:23:53 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/24 20:23:53 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

void	run_sort(t_stack_data *a, t_stack_data *b, int shift, int size)
{
	while (size)
	{
		if ((((*a->top)->value >> shift) & 1) == 1)
			ra(a);
		else
			pb(a, b);
		size--;
	}
	while (b->len)
		pa(a, b);
}

void	big_sort(t_stack_data *a, t_stack_data *b)
{
	int	max_num;
	int	max_bits;
	int	i;

	max_bits = 1;
	max_num = a->len - 1;
	while (max_num >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		run_sort(a, b, i, a->len);
		i++;
	}
}
