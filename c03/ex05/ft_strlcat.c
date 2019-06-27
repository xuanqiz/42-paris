/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 22:19:30 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/15 21:04:26 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int ld;
	unsigned int ls;
	unsigned int i;

	ld = 0;
	ls = 0;
	i = 0;
	while (src[ls] != '\0')
		ls++;
	while (dest[ld] != '\0')
		ld++;
	if (size <= ld)
		return (ls + size);
	while (src[i] && i + 1 < size)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}
