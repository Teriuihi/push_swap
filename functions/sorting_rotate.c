void ra(int *a, int a_len)
{
	int tmp1;
	int tmp2;
	int i;

	if (a_len < 2)
		return;
	i = 1;
	tmp1 = a[0];
	while (i < a_len - 1)
	{
		tmp2 = a[i];
		a[i] = tmp1;
		tmp1 = tmp2;
		i++;
	}
	a[0] = tmp1;
}

void rb(int *b, int b_len)
{
	ra(b, b_len);
}

void rr(int *a, int a_len, int *b, int b_len)
{
	ra(a, a_len);
	rb(b, b_len);
}
