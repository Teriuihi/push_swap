/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_util.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:28:10 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:28:10 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	*ft_change_size(int *arr, int ori_len, int new_len)
{
	int	*new_arr;

	new_arr = ft_calloc(new_len, sizeof(int));
	if (!new_arr)
		return (NULL);
	if (!arr)
		return (new_arr);
	if (ori_len > new_len)
		ft_memcpy(new_arr, arr, new_len * sizeof(int));
	else
		ft_memcpy(new_arr, arr, ori_len * sizeof(int));
	free(arr);
	return (new_arr);
}
