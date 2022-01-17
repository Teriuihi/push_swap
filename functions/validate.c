/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:28:19 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:28:19 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_contains(int needle, const int *haystack, int len)
{
	while (len >= 0)
	{
		if (haystack[len] == needle)
			return (1);
		len--;
	}
	return (0);
}

int	*ft_get_stack1(char **args, int len)
{
	int	*stack;
	int	i;
	int	success;

	if (len < 2)
		return (NULL);
	stack = ft_calloc(len - 1, sizeof(int));
	if (!stack)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		stack[i] = ft_atoi(args[i + 1], &success);
		if ((stack[i] == 0 && ((stack[i] + '0') != *args[i + 1]
					|| ft_strlen(args[i + 1]) != 1))
			|| ft_contains(stack[i], stack, i - 1))
		{
			free(stack);
			return (NULL);
		}
		i++;
	}
	return (stack);
}
