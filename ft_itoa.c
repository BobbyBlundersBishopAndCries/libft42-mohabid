#include <stdlib.h>

static int	count_digits(int value)
{
	int	digits;

	digits = 0;
	while (value)
	{
		value /= 10;
		digits++;
	}
	return digits;
}
static char	*negative_itoa(int n)
{
	int	digits;
	int	i;
	char	*str;

	digits = count_digits(n);
	str = (char *)malloc((digits + 2) * sizeof(char));
	if(!str)
		return (NULL);
	str[digits] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
			return ("-2147483648");
		str[0] = '-';
		n = -n;
		i = digits;
		while (i > 0)
		{
			str[i] = n % 10 + '0';
			n /= 10;
			i--;
		}
		return (str);
	}
}

char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	int	digits;

	digits = count_digits(n);
	if (n < 0)
		str = negative_itoa(n);
	else
	{
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = '\0';
		if (n == 0)
			str[0] = '0';
		else
		{
			i = digits - 1;
			while (i >= 0)
			{
				str[i] = n % 10 + '0';
				n /= 10;
				i--;
			}
		}
		return (str);
	}
}
#include <stdio.h>
int main()
{
	int n = -2147483648;
	printf("%s", ft_itoa(n));
	return 0;
}
