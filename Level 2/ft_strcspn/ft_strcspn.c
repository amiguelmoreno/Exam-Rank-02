#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str1;
	const char	*str2;

	str1 = "ABCDEF4934966";
	str2 = "013";
	//printf("First matched character is at %zu\n", ft_strcspn(str1, str2));
	printf("First matched character is at %zu\n", strcspn(str1, str2));
	printf("Str1 is : %s  /// Str2 is: %s \n", str1, str2);
}
 */