#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	int	size;
	char	dup;
	int	i;

	i = 0;
	while (s1[size])
		size++;
	if (!(dup = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
