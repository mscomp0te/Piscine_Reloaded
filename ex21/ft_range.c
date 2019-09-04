#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr_null;
	int	*ptr;
	int	i;

	ptr_null = 0;
	i = 0;
	if (min >= max)
		return (ptr_null);
	ptr = (int *)malloc(sizeof(*ptr) * (max - min));
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
