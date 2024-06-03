#include "libft.h"
#include <limits.h>
#include <stdlib.h>

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_negative;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = num_len(n);
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	if (is_negative)
		n = -n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
