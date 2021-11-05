#include "headers/internal.h"
#include "headers/libft.h"

int main(int len, char **args)
{
	if (!validate(args, len))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	return (0);
}
