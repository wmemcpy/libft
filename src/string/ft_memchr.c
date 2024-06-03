#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n && *(unsigned char *)s != (unsigned char)c)
	{
		++s;
		--n;
	}
	if (n)
		return ((void *)s);
	return (NULL);
}
