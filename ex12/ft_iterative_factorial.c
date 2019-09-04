int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	while (nb > 0)
		if (nb > 12)
			return (0);
		else if (nb == 0)
			return (res);
		else
		{
			res *= nb;
			nb--;
		}
	return (res);
}
