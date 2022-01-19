/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:29:55 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:29:55 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/internal.h"
#include "headers/libft.h"

/**
 * Loads the arguments into the stack, checks if they are sorted and if not
 * 	sorts them.
 *
 * @param	len		Amount of arguments
 * @param	args	Arguments
 *
 * @return	0 on successful execution
 */
int	main(int len, char **args)
{
	t_stack	**a;
	t_stack	**b;

	a = ft_get_stack(args, len);
	b = ft_calloc(1, sizeof(t_stack *));
	if (!a || !b)
	{
		ft_putstr_fd("Error\n", 1);
		free(a);
		free(b);
		return (0);
	}
	if (ft_is_sorted(a))
		return (0);
	return (0);
}
