#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	if (dst_c < src_c)
	{
		while (len--)
			*dst_c++ = *src_c++;
	}
	else
	{
		dst_c += len;
		src_c += len;
		while (len--)
			*--dst_c = *--src_c;
	}
	return (dst);
}
