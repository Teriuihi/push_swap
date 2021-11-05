#include <limits.h>

int	ft_is_sorted(int *arr, int len)
{
	int	last;

	last = INT_MIN;
	while (len)
	{
		if (last > *arr)
			return (0);
		last = *arr;
		len--;
		arr++;
	}
	return (1);
}