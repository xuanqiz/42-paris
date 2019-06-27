/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:00:07 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 19:45:55 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int		i;
	int					nb;

	i = 0;;
	nb = 0;
	if (tab[i] == 0)
		return (0);
	while (tab[i] && i <= len - 1)
	{
		if(nb < tab [i])
			nb = tab[i];
		i++;
	}
	return (nb);
}

#include <stdio.h>

int		main()
{
	int tab[3] = {1,2,3};
	unsigned int len;

	len = 3;
	printf("%d\n", max(tab, len));
	return (0);
}


