#include <unistd.h>

int	main (int argc, char **argv)
{
	int	size;

	size = 0;
	if (argc == 2)
	{
		while (argv[1][size])
			size++;
		while (size--)
			write(1, &argv[1][size], 1);
	}
	write(1, "\n", 1);
	return (0);
}
