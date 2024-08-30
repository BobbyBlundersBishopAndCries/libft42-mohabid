#include "libft.h"
#include <stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const char *p;
	char a;

	i = 0;
	p = (const char *)s;
	a = (char)c;
	while (i < n)
	{
		if (a == p[i])
			return (s + i);
		i++;
	}
	return (NULL);
}
