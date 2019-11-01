/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:21:55 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/01 11:46:08 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_find(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static unsigned int	ft_start(char const *s1, char const *set)
{
	unsigned int i;

	i = 0;
	while (s1[i] && ft_find(s1[i], set) == 1)
		i++;
	return (i);
}

static size_t		ft_end(char const *s1, char const *set, size_t index)
{
	size_t res;

	res = index;
	while (res != 0 && ft_find(s1[res], set) == 1)
		res--;
	return (res);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;
	char			*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) != 0)
	{
		start = ft_start(s1, set);
		end = ft_end(s1, set, ft_strlen(s1) - 1);
	}
	if (ft_strlen(s1) == 0 || end < start)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (!(res = ft_substr(s1, start, end - start + 1)))
		return (NULL);
	return (res);
}

/*
** The key of this one is to understand the subject !!@@@@!!
** only try to trim the set if it starts exactly at the begining or end
** special situations for repetation pattern occurs in the string...
** Take a look of the following examples:
** s1 = [1234****1234] set = [123], it returns [4****1234] trim the begining
** s1 = [hellohello] set = [llo], it returns [hellohe] trim the end
** s1 = [wwstarww] set = [star], it returns [wwstarww] not trimed
** s1 = [ppppp] set = [6], it returns [ppppp] set not found
** s1 = [ppppp] set = [pp6], it returns "" because "end" < "start"
** protect the funtion by checking s1/set == null
*/
