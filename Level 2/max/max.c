int	max(int *tab, unsigned int len)
{
	int	i;
	int	result;

	i = 0;
	if (len == 0)
		return (0);
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	int	tab[6];

	tab[0] = 2;
	tab[1] = 10;
	tab[2] = 2;
	tab[3] = 50;
	tab[4] = 98;
	tab[5] = -25;
	printf("%d", max(tab, 6));
	return (0);
} */
