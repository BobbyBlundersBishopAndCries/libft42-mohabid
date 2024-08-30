#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	int *tab;

	i  = 0;
	tab = (int *)malloc(size * nmemb);
	if (!tab)
		return (NULL);
	while (i < nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
