/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 09:48:36 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 10:05:06 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int		main()
{
	write(1, "9876543210\n", 11);
	return (0);
}

*/


void	ft_putchar(char s)
{
	write(1, &s, 1);
}

/*
int		main()
{
	char d;

	d = '9';
	while (d >= '0')
	{
		ft_putchar(d);
		d--;
	}
	ft_putchar('\n');
	return (0);
}
*/

int main()
{
	int i;

	i = 48 + 9;
	while ( i >= 48)
	{
		write(1, &i, 1);
		i--;
	}
	ft_putchar('\n');
	return (0);
}
