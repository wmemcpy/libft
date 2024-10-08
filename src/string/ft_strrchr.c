#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (!c)
		return ((char *)s);
	return ((char *)last);
}
