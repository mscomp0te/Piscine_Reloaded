#include <stdlib.h>

int	get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(*dest) * get_len(src))))
		return ((void *)0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
