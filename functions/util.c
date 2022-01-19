/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   util.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 18:19:31 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/19 18:19:31 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"

void	*util_free(void *ptr)
{
	free(ptr);
	return (NULL);
}
