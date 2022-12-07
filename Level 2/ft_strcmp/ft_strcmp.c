int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hola me llamo Juan";
	s2 = "Hola me llamo Maria";
	printf("%d", ft_strcmp(s1, s2));
}
 */