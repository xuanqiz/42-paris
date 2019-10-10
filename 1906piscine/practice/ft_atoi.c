/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 22:43:33 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/21 22:57:55 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*我先去看man atoi然后又读了man strtol，之后写了一个main去测试atoi（）；我发现
 * 和我们的练习题不一样，因为atoi（）只接受一个正负号，超过的就是0，后面基本一样；*/

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int n;
	int sign;

	i = 0;
	result = 0;
	n = 1;
	sign = 1;
	while (str[i] == whitespace )
		i++;
	if (str[i] != '+' && '-' && (0-9))
			return (0);
	if	(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] != (0-9)) 
		return (0);
	while (str[i] == (0-9))
		i++;
	while (str[--i] && str[i] == (0-9))
	{
		result = result + (str[i] - '0') * n;
		n *= 10;
	}
	result = result * sign
	return (result)
}

