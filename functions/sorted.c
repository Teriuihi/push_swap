/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorted.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 19:44:26 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 19:44:26 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_is_sorted(int *arr, int len)
{
	int	last;

	last = INT_MIN;
	while (len)
	{
		if (last > *arr)
			return (0);
		last = *arr;
		len--;
		arr++;
	}
	return (1);
}
