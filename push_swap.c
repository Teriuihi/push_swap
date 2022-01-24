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

void	sort(t_stack_data *a, t_stack_data *b)
{
	if (a->len <= 3)
		small_sort(a);
	else if (a->len <= 5)
		med_sort(a, b);
	else {
		//TODO
	}
}

t_stack_data	*get_b_stack()
{
	t_stack_data	*b;

	b = ft_calloc(1, sizeof(t_stack *));
	if (!b)
		return (NULL);
	b->top = ft_calloc(1, sizeof(t_stack *));
	if (!b->top)
	{
		free(b);
		return (NULL);
	}
	return (b);
}

t_stack_data	*get_a_stack(int len, char **args)
{
	char			**strs;
	t_stack_data	*a;

	if (len != 2)
	{
		ft_putstr_fd("Error\n", 1);
		return (NULL);
	}
	strs = ft_split(args[1], ' ');
	if (strs == NULL)
	{
		ft_putstr_fd("Error\n", 1);
		return (NULL);
	}
	a = ft_get_stack(strs, ft_calloc(1, sizeof(t_stack_data)));
	free(strs);
	return (a);
}

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
	t_stack_data	*a;
	t_stack_data	*b;

	if (len != 2)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	a = get_a_stack(len, args);
	if (!a)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	b = get_b_stack();
	if (!b)
	{
		stack_free(a);
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	if (ft_is_sorted(a))
		return (0);
	sort(a, b);
	return (0);
}
