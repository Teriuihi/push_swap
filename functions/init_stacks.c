/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init_stacks.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/28 14:25:35 by sappunn       #+#    #+#                 */
/*   Updated: 2022/01/28 14:25:35 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/internal.h"
#include "../headers/libft.h"

t_stack_data	*get_b_stack(void)
{
	t_stack_data	*b;

	b = ft_calloc(1, sizeof(t_stack *));
	if (!b)
		return (NULL);
	b->top = ft_calloc(1, sizeof(t_stack *));
	b->len = 0;
	if (!b->top)
	{
		free(b);
		return (NULL);
	}
	return (b);
}

t_stack_data	*get_a_stack(int len, char **args)
{
	t_stack_data	*a;

	if (len < 2)
		return (NULL);
	a = ft_get_stack(args, len, ft_calloc(1, sizeof(t_stack_data)));
	return (a);
}
