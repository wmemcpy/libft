#include <stddef.h>

size_t	ft_len_array(void **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
