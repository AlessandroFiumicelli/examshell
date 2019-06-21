int     ft_is_space(int c)
{
        if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
                return (1);
        return (0);
}


int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (!str[i])
		return (0);
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++]== '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}
