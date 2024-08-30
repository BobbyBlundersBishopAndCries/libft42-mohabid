#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	while(i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    ft_memcpy(dest, src, sizeof(src));
    for (int i = 0; i < 5; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}*/
