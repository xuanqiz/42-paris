/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:26:48 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/27 20:14:40 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nbr < 0)
		{
			ft_putnbr_fd('-', fd);
			nbr *= -1;
		}
		if (nbr > 9)
			ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}

/*
** use long to avoid negative int or make a special if for it
*/
