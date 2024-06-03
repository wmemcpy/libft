#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = 0;
	while (little[little_len])
		++little_len;
	if (!little_len)
		return ((char *)big);
	while (*big && len >= little_len)
	{
		if (*big == *little && !ft_memcmp(big, little, little_len))
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
