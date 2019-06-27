/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:07:14 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/13 23:07:41 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else
		{
			if (nb >= 10)
			{
				ft_putnbr(nb / 10);
				ft_putchar((nb % 10) + 48);
			}
			else
				ft_putchar((nb % 10) + 48);
		}
	}
}
