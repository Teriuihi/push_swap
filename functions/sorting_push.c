#include "../headers/internal.h"
#include "../headers/libft.h"

int	px(int **x1, int x1_len, int **x2, int x2_len)
{
	if (x2_len == 0)
		return (1);
	*x1 = ft_change_size(*x1, x1_len, x1_len + 1);
	if (*x1 == NULL)
		return (0);
	(*x1)[x1_len + 1] = (*x2)[x2_len];
	*x2 = ft_change_size(*x2, x2_len, x2_len - 1);
	if (*x2 == NULL)
		return (0);
	return (1);
}

int pa(int **a, int a_len, int **b, int b_len)
{
	int success;

	success = px(a, a_len, b, b_len);
	if (success)
		ft_putstr_fd("pa\n", 1);
	return (success);
}

int pb(int **a, int a_len, int **b, int b_len)
{
	int success;

	success = px(b, b_len, a, a_len);
	if (success)
		ft_putstr_fd("pb\n", 1);
	return (success);
}
