#include <limits.h>
int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sign == 1 && (result > INT_MAX / 10 || result > INT_MAX - (nptr[i] - '0') / 10))
			return (INT_MAX);
		else if (sign == -1 && (result > -(INT_MIN / 10) || -result < INT_MIN + (nptr[i] - '0') / 10))
			return (INT_MIN);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("-655688888864555"));
}
