#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(int, char))
{
	unsigned int	i;
	char	*result;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	result = (char *)malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
