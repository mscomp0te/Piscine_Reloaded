/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:36:49 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/04 19:36:50 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		while (root <= nb / root)
		{
			if (root * root == nb)
				return (root);
			else if (root == 46341)
				return (0);
			root++;
		}
	return (0);
}
