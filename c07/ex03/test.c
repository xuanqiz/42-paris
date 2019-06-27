/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:25:25 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/22 11:44:58 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int		main()
{
	char *str2[5] = {"salut", "hello", "hi"};
	char *con = "lol";
	printf("\"salut\" with the connector \"tr\", connect to \"hello\" is :\n");
	printf("%s \n", ft_strjoin(2, str2, con));
}
