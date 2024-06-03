#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	while (dst[i] && i < size)
		++i;
	dst_len = i;
	while (src[i - dst_len] && i + 1 < size)
	{
		dst[i] = src[i - dst_len];
		++i;
	}
	if (dst_len < size)
		dst[i] = '\0';
	while (src[i - dst_len])
		++i;
	return (i);
}
