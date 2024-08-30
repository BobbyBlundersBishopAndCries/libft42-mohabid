#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static size_t	ft_strlen(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

static int is_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if(c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	char	*result;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && is_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > 0 && is_set(set, s1[end - 1]))
		end--;
	if (start >= end)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		*result = '\0';
		return (result);
	}
	result = (char *)malloc((end - start) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
#include <stdio.h>
int main()
{
	char *str = "abbabbababamy name is simo bababbabab";
	char *set = "ab";
	char *result = ft_strtrim(str,set);
	printf("%s",result);
	free(result);
	return 0;
}
