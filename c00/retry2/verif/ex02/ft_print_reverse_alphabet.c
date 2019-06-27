/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:49:25 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/09 11:12:49 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r)
{
	write(1, &r, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char r;

	r = 'z';
	while (r >= 'a')
	{
		ft_putchar(r);
		r--;
	}
}
