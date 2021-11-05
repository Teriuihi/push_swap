#include "../headers/libft.h"

int *ft_change_size(int *arr, int ori_len, int new_len)
{
	int *new_arr;

	new_arr = ft_calloc(new_len, sizeof(int));
	if (!new_arr)
		return (NULL);
	if (ori_len > new_len)
		ft_memcpy(new_arr, arr, new_len);
	else
		ft_memcpy(new_arr, arr, ori_len);
	free(arr);
	return (new_arr);
}