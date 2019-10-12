#include "libft.h"

size_t	ft_strlcat(char *dst, const char* src, size_t dstsize)
{	
	size_t	dst_len;
	size_t	size;

	dst_len = ft_strlen(dst);
	if len < dstsize
		size = dst_len;
	else
		size = dstsize;
	if (dstsize == 0)
		return (dst_len + ft_strlen(src));
	while (src[dstsize - dst_len - 1] && dst_len < dstsize - 1)
	{
		dst[len] = src[dst_len - ];
	}
	if (dst_len < dstsize)
		dest[i] = '\0';
	return (dst_len + ft_strlen(src));	
}
