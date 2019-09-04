/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:36:41 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/04 19:36:42 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
