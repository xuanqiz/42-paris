#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (needle = '\0')
		return (haystack);
	while (haystack[i] & i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
 			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/* refer to c03 ft_strstr, we try to find needle in haystack, but we won't search for all of them.
we only search a predefined length(len).
the first while goes over haystack, the inner while to check whether there are characters fully match needle, not just partly
if so, it will starts to write?? not sure about &
*/
