int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (str == (void *)0)
		return (0);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
