#include "../headers/libft.h"

void rrx(int *x, int x_len)
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

void rra(int *a, int a_len)
{
	rrx(a, a_len);
	ft_putstr_fd("rra\n", 1);
}

void rrb(int *b, int b_len)
{
	rrx(b, b_len);
	ft_putstr_fd("rrb\n", 1);
}

void rrr(int *a, int a_len, int *b, int b_len)
{
	rrx(a, a_len);
	rrx(b, b_len);
	ft_putstr_fd("rrr\n", 1);
}
