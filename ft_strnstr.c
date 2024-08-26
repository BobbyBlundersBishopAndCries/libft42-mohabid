#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return (haystack);
	if (*haystack == '\0' || haystack == NULL || n == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j] && i < n)
			j++;
		if (needle[j] == '\0')
			return (haystack + i + j);
		i++;
	}
	return (NULL);
}
