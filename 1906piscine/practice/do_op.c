/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 11:46:06 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 14:14:51 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{	
		putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		putnbr(nbr / 10);
		putchar (nbr % 10 +'0');
	}
	if (nbr <= 9)
		putchar(nbr % 10 + '0');
}

int		main(int ac, char **av)
{
	long nb;

	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (av[2][0] == '*')
		nb = atoi(av[1]) * atoi(av[3]);
	if (av[2][0] == '/')
		nb = atoi(av[1]) / atoi(av[3]);
	if (av[2][0] == '+')
		nb = atoi(av[1]) + atoi(av[3]);
	if (av[2][0] == '-')
		nb = atoi(av[1]) - atoi(av[3]);
	printf("%ld\n", nb);
	putnbr(nb);
	return (0);
}
