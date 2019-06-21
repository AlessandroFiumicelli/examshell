
char	*ft_strrev(char *str)
{
	char	tmp;
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	while (str[i])
	{
		tmp = str[i];
		str[i] = str[size];
		str[size] = tmp;
		i++;
		size--;
	}
	str[i] = '\0';
	return (str);
}
