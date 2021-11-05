#include "../headers/internal.h"

int pa(int **a, int a_len, int **b, int b_len)
{
	if (b_len == 0)
		return (1);
	*a = ft_change_size(*a, a_len, a_len + 1);
	if (*a == NULL)
		return (0);
	(*a)[a_len + 1] = (*b)[b_len];
	*b = ft_change_size(*b, b_len, b_len - 1);
	if (*b == NULL)
		return (0);
	return (1);
}

int pb(int **a, int a_len, int **b, int b_len)
{
	return (pa(b, b_len, a, a_len));
}
