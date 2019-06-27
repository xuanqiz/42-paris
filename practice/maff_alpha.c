/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 10:14:52 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 10:24:35 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int main()
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}

*/
void	ft_putchar(char s)
{
	write(1, &s, 1);
}

int		main()
{
	char a;
	char b;	

	a = 'a';
	b = 'B';
	while(a <= 'y' && b <= 'Z')
	{
		ft_putchar(a);
		ft_putchar(b);
		a = a + 2;
		b = b + 2;
	}
	ft_putchar('\n');
	return (0);
}

