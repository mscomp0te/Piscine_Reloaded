/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:38:10 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/04 19:38:11 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
