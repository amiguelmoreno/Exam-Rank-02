
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* 
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hola muy buenas";
	printf("%d", ft_strlen(str));
} */
