/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   med_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:31:32 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:31:32 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

/** TODO comment
 * a_len has to be 4
 * @param a
 * @param a_len
 * @param b
 * @param b_len
 */
void	something(int **a, int a_len, int **b, int b_len)
{
	if (**b > *a[a_len - 1])
	{
		pa(a, a_len, b, b_len);
		ra(*a, a_len + 1);
	}
	else if (**b < *a[1])
	{
		pa(a, a_len, b, b_len);
		sa(*a, a_len + 1);
	}
	else if (**b < *a[2])
	{
		ra(*a, a_len);
		pa(a, a_len, b, b_len);
		sa(*a, a_len + 1);
		rra(*a, a_len + 1);
	}
	else
	{
		rra(*a, a_len);
		pa(a, a_len, b, b_len);
		ra(*a, a_len + 1);
	}
}

/** TODO comment
 * a_len has to be 3
 * @param a
 * @param a_len
 * @param b
 * @param b_len
 */
void	func(int **a, int a_len, int **b, int b_len)
{
	if (**b < **a)
		pa(a, a_len, b, b_len);
	else if (**b > *a[a_len - 1])
	{
		pa(a, a_len, b, b_len);
		ra(*a, a_len + 1);
	}
	else
	{
		if (**b > *a[1])
		{
			pa(a, a_len, b, b_len);
			sa(*a, a_len + 1);
		}
		else
		{
			rra(*a, a_len);
			pa(a, a_len, b, b_len);
			ra(*a, a_len + 1);
		}
	}
}

/** TODO comment and norm
 * Should only be called on arr with 4-5 entries
 * @param arr
 */
void	med_sort(int **a, int a_len)
{
	int	*b;
	int	b_len;

	b = NULL;
	b_len = 0;
	pb(a, a_len, &b, 0);
	b_len++;
	a_len--;
	while (a_len > 3)
	{
		pb(a, a_len, &b, 0);
		b_len++;
		a_len--;
	}
	small_sort(*a, a_len);
	func(a, a_len, &b, b_len);
	if ((b_len - 1) == 1)
	{
		if (*b < **a)
			pa(a, a_len, &b, b_len - 1);
		else
			something(a, a_len, &b, b_len - 1);
	}
}
