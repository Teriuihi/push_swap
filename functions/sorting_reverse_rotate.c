void rra(int *a, int a_len)
{
	int tmp1;
	int tmp2;

	if (a_len < 2)
		return;
	tmp1 = a[a_len - 1];
	a_len -= 2;
	while (a_len)
	{
		tmp2 = a[a_len];
		a[a_len] = tmp1;
		tmp1 = tmp2;
		a_len--;
	}
	a[0] = tmp1;
}

void rrb(int *b, int b_len)
{
	rra(b, b_len);
}

void rrr(int *a, int a_len, int *b, int b_len)
{
	rra(a, a_len);
	rrb(b, b_len);
}
