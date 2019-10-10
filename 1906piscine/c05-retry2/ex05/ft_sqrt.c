/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 14:12:15 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/18 20:11:48 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i * i < nb && i < 46341)
			i++;
		if (i * i == nb)
			return (i);
		else
			return (0);
	}
	else
		return (0);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-456));
	printf("%d\n", ft_sqrt(456));
	printf("%d\n", ft_sqrt(121));
	printf("%d\n", ft_sqrt(22222222));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(214567892));
	printf("%d\n", ft_sqrt(1231546200));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(0));

}
