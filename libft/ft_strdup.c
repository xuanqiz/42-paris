#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;
	int 	i;
	int   len;
	
	len = ft_strlen(s1);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
