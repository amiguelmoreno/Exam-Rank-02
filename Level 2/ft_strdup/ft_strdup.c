#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	copy = malloc(sizeof(char) * len);
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* #include <stdio.h>
int	main(void)
{
	char	*src;

	src = "Me cago en todo";
	printf("%s", ft_strdup(src));
	return (0);
} */
