#include "headers/internal.h"
#include "headers/libft.h"

int main(int len, char **args)
{
	int *stack1;

	stack1 = get_stack1(args, len);
	if (!stack1)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	return (0);
}
