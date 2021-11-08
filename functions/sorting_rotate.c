#include "../headers/libft.h"

void rx(int *x, int x_len)
{
	int tmp1;
	int tmp2;

	if (x_len < 2)
		return;
	tmp1 = x[0];
	x_len -= 1;
	while (x_len)
	{
		tmp2 = x[x_len];
		x[x_len] = tmp1;
		tmp1 = tmp2;
		x_len--;
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
