/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:44:36 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/24 21:35:12 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_definesep(char s, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (s == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_index(char *str, char *charset)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] && ft_definesep(str[i], charset) == 1)
			i++;
		if (str[i] && ft_definesep(str[i], charset) == 0)
		{
			index++;
			while (str[i] && ft_definesep(str[i], charset) == 0)
				i++;
		}
	}
	return (index);
}

char	*ft_malloc(char *str, char *charset)
{
	char	*size;
	int		i;

	i = 0;
	while (str[i] && ft_definesep(str[i], charset) == 0)
		i++;
	size = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && ft_definesep(str[i], charset) == 0)
	{
		size[i] = str[i];
		i++;
	}
	size[i] = 0;
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		k;

	i = 0;
	k = 0;
	array = (char **)malloc(sizeof(char *) * (ft_index(str, charset) + 1));
	if (!array)
		return (0);
	while (str[k])
	{
		while (str[k] && ft_definesep(str[k], charset) == 1)
			k++;
		if (str[k] && ft_definesep(str[k], charset) == 0)
		{
			array[i] = ft_malloc(str + k, charset);
			i++;
			while (str[k] && ft_definesep(str[k], charset) == 0)
				k++;
		}
	}
	array[i] = NULL;
	return (array);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	(void)argc;
	while (i < 4)
	{
		printf("%s\n", ft_split(argv[1], "a")[i]);
		i++;
	}
	return (0);
}

