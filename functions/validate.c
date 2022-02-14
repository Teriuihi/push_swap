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

	if (haystack == NULL || *haystack == NULL)
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

t_stack_data	*ft_get_stack(char **nums, int len, t_stack_data	*x)
{
	t_stack	*new;
	int		success;
	int		i;

	i = 0;
	if (!x)
		return (NULL);
	x->top = ft_calloc(1, sizeof(t_stack *));
	if (!x->top)
		return (util_free(x));
	while (i < len)
	{
		new = ft_stack_new(ft_atoi(nums[i], &success));
		if (new == NULL || success == 0 || ft_contains(new->value, x->top))
		{
			free(x->top);
			free(x);
			return (util_free(new));
		}
		ft_stack_add_back(x->top, new);
		x->len++;
		i++;
	}
	make_consecutive(x);
	return (x);
}
