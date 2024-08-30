#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned const char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == NULL || s == NULL)
		return (NULL);
	if (d < s || d >= s + n)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (d);
}
