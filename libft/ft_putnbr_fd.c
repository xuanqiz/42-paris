/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:26:48 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/09 13:41:03 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	inner_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	tmp;

	tmp = (long)n;
	if (tmp < 0)
	{
		inner_putchar_fd('-', fd);
		tmp *= -1;
	}
	if (tmp >= 10)
	{
		ft_putnbr_fd(tmp / 10, fd);
		ft_putnbr_fd(tmp % 10, fd);
	}
	else
		inner_putchar_fd(tmp + '0', fd);
}

/*
** use long to avoid negative int or make a special if for it
*/
