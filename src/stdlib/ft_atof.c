#include "libft.h"
#include "libft.h"

double	ft_atof(const char *nptr)
{
	double	res;
	double	dec;
	int		sign;

	res = 0;
	dec = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign = -1;
	while (ft_isdigit(*nptr))
		res = res * 10 + (*nptr++ - '0');
	if (*nptr++ == '.')
	{
		while (ft_isdigit(*nptr))
		{
			dec = dec * 10 + (*nptr++ - '0');
			res *= 10;
		}
	}
	return ((res + dec) * sign);
}
