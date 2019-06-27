/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 16:38:46 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/21 16:49:51 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_reverse(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{	
	(void)argc;
	printf("%s\n", ft_reverse(argv[1]));
}
