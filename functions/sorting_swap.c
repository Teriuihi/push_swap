void sa(int *a, int a_len)
{
	int tmp;
	if (a_len < 2)
		return;
	tmp = a[a_len - 2];
	a[a_len - 2] = a[a_len - 1];
	a[a_len - 1] = tmp;
}

void sb(int *b, int b_len)
{
	sa(b, b_len);
}

void ss(int *a, int a_len, int *b, int b_len)
{
	sa(a, a_len);
	sb(b, b_len);
}
