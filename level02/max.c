
int	max(int	*tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	if (tab[i] == NULL)
		return (0);
	while (i <= len)
	{
		if (max < str[i])
			max = str[i];
		i++;
	}
	return (max);

}
