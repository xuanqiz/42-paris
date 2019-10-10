/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:16:15 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 22:13:01 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int k;
	//int n;
	char *str;

	str = NULL;
	i = 0;
	k = 0;
	if (ac != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				str[k] = av[1][i];
				//n = k - 1;
				//while (str[k] && str[n] && n > -1)
				//{
					//if (str[k] == str[n])
					//	break ;
				//	n--;
				//}
				write (1, &str[k], 1);
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
