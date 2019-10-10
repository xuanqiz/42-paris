/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 21:57:52 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/16 17:26:11 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_base(char *base)
{
	int i;
	int r;

	i = 0;
	r = i + 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == '.')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[r])
		{
			if (base[i] == base[r])
				return (0);
			r++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_write_base(long number, int s, char *base)
{
	if (number >= s)
		ft_write_base(number / s, s, base);
	ft_putchar(base[number % s]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long s;
	long number;

	s = 0;
	number = nbr;
	while (base[s])
		s++;
	if (ft_base(base))
	{
		if (number < 0)
		{
			ft_putchar('-');
			number *= (-1);
		}
		ft_write_base(number, s, base);
	}
}
