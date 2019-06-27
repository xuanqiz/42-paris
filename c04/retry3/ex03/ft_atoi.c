/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:08:22 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/14 15:42:15 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sign(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 1)
		return (-1);
	return (1);
}

int		ft_atoi(char *str)
{
	int				i;
	int				result;
	long int		n;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[--i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result + (str[i] - '0') * n;
		n = n * 10;
	}
	result = result * ft_sign(str);
	return (result);
}
