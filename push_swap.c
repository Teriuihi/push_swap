#include "headers/internal.h"
#include "headers/libft.h"

/**
 * Loads the arguments into the stack, checks if they are sorted and if not
 * 	sorts them.
 * @param len Amount of arguments
 * @param args Arguments
 * @return 0 on successful execution
 */
int main(int len, char **args)
{
	int *a;
	int *b;

	a = ft_get_stack1(args, len);
	if (!a)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	if (ft_is_sorted(a, len - 1))
		return (0);
	return (0);
}
