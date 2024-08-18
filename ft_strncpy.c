char	*ft_strncpy(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (src[i] && i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
