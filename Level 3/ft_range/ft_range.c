#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*result;
	int	i;
	int	copy;

	i = 0;
	copy = start;
	while (copy <= end)
	{
		copy++;
		i++;
	}
	result = (int *)malloc(sizeof(int) * (i + 1));
	i = 0;
	while (start <= end)
	{
		result[i] = start;
		start++;
		i++;
	}
	return (result);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	*result;
	int	i;

	i = 0;
	result = ft_range(-4, 9);
	while (result[i] < 10)
	{
		printf("%d", result[i]);
		i++;
	}
} */
