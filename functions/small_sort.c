/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 19:44:30 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 19:44:30 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

/** todo comment and norm
 * Should only be called on arr with 3 entries
 * 	321 -> 231
 * 	132 -> 312
 * 	213 -> 123
 * 	312 -> 123
 * 	231 -> 123
 * @param	arr	array to sort
 * @param	len	length of array
 */
void	small_sort(int *arr, int len)
{
	if (len == 2)
		if (arr[0] > arr[1])
			sa(arr, 2);
	if (len != 3)
		return ;
	if ((arr[0] > arr[1] && arr[1] > arr[2])
		|| (arr[0] < arr[1] && arr[2] < arr[1] && arr[0] < arr[2]))
		sa(arr, len);
	if (arr[0] > arr[1] && arr[2] > arr[1] && arr[2] > arr[0])
		sa(arr, len);
	else if (arr[0] > arr[1] && arr[0] > arr[2] && arr[2] > arr[1])
		ra(arr, len);
	else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[2] < arr[0])
		rra(arr, len);
}
