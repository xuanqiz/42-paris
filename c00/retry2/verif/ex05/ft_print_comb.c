/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 12:37:47 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/09 13:42:55 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	display(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0 + 48;
	while (a <= 54)
	{
		b = 1 + 48;
		while (b <= 56)
		{
			c = 2 + 48;
			while (c <= 57)
			{
				if ((c > b && b > a) && (a != b && b != c && a != c))
					display(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "789", 3);
}
