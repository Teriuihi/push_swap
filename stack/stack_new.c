/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacknew.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:39:50 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 17:39:50 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Creates a new t_stack entry containing the given content
 *
 * @param	content	The content to put in the new t_stack entry
 *
 * @return	A new t_stack entry with the given content
 */

#include "../headers/internal.h"
#include "../headers/libft.h"

t_stack	*ft_stack_new(int value)
{
	t_stack	*start;

	start = ft_calloc(1, sizeof(*start));
	if (!start)
		return (NULL);
	start->value = value;
	start->next = NULL;
	start->prev = NULL;
	return (start);
}
