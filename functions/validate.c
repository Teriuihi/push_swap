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
#include "../headers/internal.h"

int	ft_contains(int needle, t_stack **haystack)
{
	t_stack	*tmp;

	if (*haystack == NULL)
		return (0);
	tmp = *haystack;
	if (tmp->value == needle)
		return (1);
	tmp = tmp->next;
	while (tmp != *haystack && tmp != NULL)
	{
		if (tmp->value == needle)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

t_stack	**ft_get_stack(char **nums)
{
	t_stack	**top;
	t_stack	*new;
	int		i;
	int		success;

	if (nums == NULL)
		return (NULL);
	top = ft_calloc(1, sizeof(t_stack *));
	if (!top)
		return (NULL);
	i = 0;
	while (*nums != NULL)
	{
		new = ft_stack_new(ft_atoi(*nums, &success));
		if (new == NULL || success == 0 || ft_contains(new->value, top))
		{
			free(top);
			return (util_free(new));
		}
		ft_stack_add_back(top, new);
		i++;
		nums++;
	}
	make_consecutive(top);
	return (top);
}
