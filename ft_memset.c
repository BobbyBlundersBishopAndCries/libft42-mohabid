#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
#include <stdio.h>

int main() {
    char arr[10];
    ft_memset(arr, 'A', sizeof(arr));
    for (int i = 0; i < sizeof(arr); i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}
