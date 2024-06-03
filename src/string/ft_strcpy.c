#include "libft.h"

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	char	*original_dst;

	original_dst = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (original_dst);
}
