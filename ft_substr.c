#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char		*substr;
	unsigned int	j;

	if (!s)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	j = 0;
	while (len - start > 0)
	{
		substr[j] = s[start];
		j++;
		start++;
	}
	substr[j] = '\0';
	return (substr);
}
