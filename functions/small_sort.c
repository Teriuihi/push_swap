#include "../headers/internal.h"

/** todo comment and norm
 * Should only be called on arr with 3 entries
 * @param arr
 */
void	small_sort(int *arr, int len)
{
	if (len == 2)
		if (arr[0] > arr[1])
			sa(arr, 2);
	if (len != 3)
		return;
	if ((arr[0] > arr[1] && arr[1] > arr[2]) || //3 2 1 -> 2 3 1
			(arr[0] < arr[1] && arr[2] < arr[1] && arr[0] < arr[2]))  //1 3 2 -> 3 1 2
		sa(arr, len);
	if (arr[0] > arr[1] && arr[2] > arr[1] && arr[2] > arr[0]) //2 1 3
		sa(arr, len);
	else if (arr[0] > arr[1] && arr[0] > arr[2] && arr[2] > arr[1]) //3 1 2
		ra(arr, len);
	else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[2] < arr[0]) //2 3 1
		rra(arr, len);
	arr[0] = arr[0]; //TODO REMOVE
}
