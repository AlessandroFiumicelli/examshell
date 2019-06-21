#include <unistd.h>

int	ft_is_space(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if ( argc == 2)
	{
		while (ft_is_space(argv[1][i]))
			i++;
		while (!(ft_is_space(argv[1][i]) && argv[1][i]))
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
