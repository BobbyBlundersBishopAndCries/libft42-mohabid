int	ft_isalnum(int c)
{
	return ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z') || (c <= '9' && c >= '0'));
}
