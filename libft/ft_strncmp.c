#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{	
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n && ((s1[i] != '\0' && s2[i] == '\0')
			|| (s1[i] == '\0' && s2[i] != '\0')))
		return (s1[i] - s2[i]);	
	return (0);
}