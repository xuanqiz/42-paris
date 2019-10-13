/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:05:26 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/13 17:23:20 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lifbt.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;
	int	i;

	n = 0;
	sign = 0;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		n = (n * 10) - 48 + str[i];
		i++;
	}
	if (sign == 1)
		return (-n);
	else
		return (n);
}

/*
** check man strtole, then man isspace
** \t \n \v \f \r ''
*/
