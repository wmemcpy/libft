#include "libft.h"
#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*new_str;

	len = ft_strnlen(s, n);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	ft_memcpy(new_str, s, len);
	return (new_str);
}
