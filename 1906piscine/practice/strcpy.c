/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:37:31 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/27 19:42:38 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

int		main()
{
	char	s1[100] = "123456";
	char	s2[100] = "";

	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n",strcpy(s1, s2));
	return (0);
}

