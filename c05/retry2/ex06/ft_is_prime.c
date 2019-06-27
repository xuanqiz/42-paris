/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 14:41:44 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/18 19:43:34 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i * i < nb && i < 46341)
			i++;
		if (nb % i == 0)
			return (i);
		else
			return (0);
	}
	else
		return (0);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (ft_sqrt(nb) != 0)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (nb % i != 0 && i < nb)
	{
		i = i + 2;
		if (nb % i == 0 && i == nb)
			return (1);
	}
	return (0);
}
