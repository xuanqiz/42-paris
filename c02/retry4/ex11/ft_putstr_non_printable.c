/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:14:29 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/25 11:31:25 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

void	ft_print_hex(unsigned char nb)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[nb / 16]);
	ft_putchar(hex[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (((str[i] < 32) && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		else if (str[i] < 0)
			ft_print_hex(str[i] + 256);
		else
			ft_putchar(str[i]);
		i++;
	}
}
