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
 * 	210 -> 120 sa
 * 	021 -> 201 sa
 * 	102 -> 012 sa
 * 	201 -> 012 ra
 * 	120 -> 012 rra
 * @param	arr	array to sort
 * @param	len	length of array
 */
void	small_sort(t_stack_data *a)
{
	t_stack	*tmp;

	tmp = *(a->top);
	if (a->len == 2)
		if (tmp->value > tmp->next->value)
			sa(a);
	if (a->len != 3)
		return ;
	if ((tmp->value > tmp->next->value && tmp->next->value > tmp->prev->value)
		|| (tmp->value < tmp->next->value && tmp->prev->value < tmp->next->value
			&& tmp->value < tmp->prev->value))
		sa(a);
	tmp = *(a->top);
	if (tmp->value > tmp->next->value && tmp->prev->value > tmp->next->value
		&& tmp->prev->value > tmp->value)
		sa(a);
	else if (tmp->value > tmp->next->value && tmp->value > tmp->prev->value
		&& tmp->prev->value > tmp->next->value)
		ra(a);
	else if (tmp->next->value > tmp->value
		&& tmp->next->value > tmp->prev->value
		&& tmp->prev->value < tmp->value)
		rra(a);
}
