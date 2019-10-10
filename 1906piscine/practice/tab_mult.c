/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 20:23:38 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 21:55:09 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char s)
{
	write (1, &s, 1);
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10 );
		ft_putchar(n % 10 + '0');
	}
	else if (n <= 9)
		ft_putchar(n % 10 + '0');
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int nb;

	nb = 0;
	n = 1;
	i = ft_strlen(str);
	while(str[--i])
	{
		nb = nb + (str[i] - '0') * n;
		//printf("i :%d\n", i);
		//printf("nb: %d\n", nb);
		//printf("n :%d\n", n);
		n = n * 10;
	}
	return (nb);
}


int		main(int ac, char **av)
{
	int n;
	int i;
	int result;

	i = 1;
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	n = ft_atoi(av[1]);
	printf("main: %d\n", n);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1," x ", 3);
		ft_putnbr(n);
		write(1," = ", 3);
		result = i * n;
		ft_putnbr(result);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
