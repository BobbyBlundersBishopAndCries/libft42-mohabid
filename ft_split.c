#include "libft.h"
#include <stdlib.h>

int	word_count(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if(str[i] && str[i] != c)
			count++;
		while(str[i] && str[i] != c)
			i++;
	}
	return (count);
}

char	*allocate_word(const char *s, int start, int end)
{
	char	*word;
	int	i;

	i = 0;
	if (start >= end)
		return (NULL);
	word = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j++] = allocate_word(s,start,i);
	}
	tab[j] == NULL;
	return (tab);
}
#include <stdio.h>
int main()
{
	char *str = "med abid is a good chess player";
	char **tab = ft_split(str,' ');
	for(int  i = 0 ; i < word_count(str,' '); i++)
	printf("word %d = %s \n", i + 1,tab[i]);
	free(tab);
	return 0;
}
