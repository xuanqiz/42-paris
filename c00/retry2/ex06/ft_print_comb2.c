/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:02:13 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/10 10:57:41 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	display(int nb)
{
	int fir;
	int sec;

	if (nb <= 9)
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
	else
	{
		fir = nb / 10;
		sec = nb % 10;
		ft_putchar(fir + 48);
		ft_putchar(sec + 48);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while ((a < b) && (a < 98))
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < b)
			{
				display(a);
				ft_putchar(' ');
				display(b);
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}
