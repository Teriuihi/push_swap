#include "headers/internal.h"
#include "headers/libft.h"

int main(int len, char **args)
{
	int *stack1;

	stack1 = ft_get_stack1(args, len);
	if (!stack1)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	if (ft_is_sorted(stack1, len - 1))
		ft_putstr_fd("SORTED\n", 1); //TODO REMOVE
	else
		ft_putstr_fd("UNSORTED\n", 1); //TODO REMOVE
	return (0);
}
