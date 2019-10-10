/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 20:04:38 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 20:22:59 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int a;
	int b;
	int n;
	int nb;
	
	nb = 1;
	if (ac != 3)
	{
		printf("\n"); 
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	n = 1;
	while ( n <= a && n <= b)		
	{		
		if (a % n == 0 && b % n == 0)
			nb = n;
		n++;
	}
	printf("%d\n",nb);
	return (0);
}
