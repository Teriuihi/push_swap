#include "../headers/libft.h"

void rx(int *x, int x_len)
{
	int tmp1;
	int tmp2;
	int i;

	if (x_len < 2)
		return;
	i = 1;
	tmp1 = x[0];
	while (i < x_len - 1)
	{
		tmp2 = x[i];
		x[i] = tmp1;
		tmp1 = tmp2;
		i++;
	}
	x[0] = tmp1;
}

void ra(int *a, int a_len)
{
	rx(a, a_len);
	ft_putstr_fd("ra\n", 1);
}

void rb(int *b, int b_len)
{
	rx(b, b_len);
	ft_putstr_fd("rb\n", 1);
}

void rr(int *a, int a_len, int *b, int b_len)
{
	rx(a, a_len);
	rx(b, b_len);
	ft_putstr_fd("rr\n", 1);
}
