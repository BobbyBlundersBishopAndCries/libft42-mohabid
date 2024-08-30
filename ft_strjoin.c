#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static int ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strjoin(char *s1, char *s2)
{
	size_t i;
	size_t j;
	char	*result;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	result = (char *)malloc((i + j + 1) * sizeof(char));
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result [i + j] = '\0';
	return (result);
