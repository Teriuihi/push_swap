/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:30:55 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:30:55 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

/**
 * Calculates the length of a string
 *
 * @param	c	String to get the length of
 *
 * @return	The length of the string
 */
size_t	ft_strlen(const char *c)
{
	const char	*tmp;

	tmp = c;
	while (*tmp)
		tmp++;
	return (tmp - c);
}
