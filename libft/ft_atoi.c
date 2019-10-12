/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:05:26 by xzhao             #+#    #+#             */
/*   Updated: 2019/10/12 19:56:38 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lifbt.h"

int		ft_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] == whitespace)
		i++;
	if (str[i] != '+' && '-' && (str < 0 || str > 9))
		return (0);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int n;

	i = 0;
	result = 0;
	n = 1;
	while (str[i] == whitespace)
		i++;
	if ((str[i] != '+' && '-') && (str < 0 || str > 9))
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] < 0 || str[i] > 9)
		return (0);
	while (str[i] >= 0 && str[i] <= 9)
		i++;
	while (str[--i] && str[i] >= 0 && str[i] <= 9)
	{
		result = result + (str[i] - '0') * n;
		n *= 10;
	}
	result = result * ft_sign(str);
	return (result);
}
