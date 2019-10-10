/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:54:56 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 14:14:32 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else if (nbr <= 9)
		ft_putchar(nbr % 10 + '0');
}

/*
int		main()
{
	int nb;

	nb = 123456;
	ft_putnbr(nb);
	return (0);
}
*/

int		main(int ac, char **av)
{
	(void)ac;
	ft_putnbr(atoi(av[1]));
	ft_putchar('\n');
	printf("%d\n", atoi(av[1]));
	return (0);
}
