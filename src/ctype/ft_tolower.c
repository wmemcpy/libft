int	ft_tolower(int c)
{
	return (c + (c >= 'A' && c <= 'Z') * 32);
}
