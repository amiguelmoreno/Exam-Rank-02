#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	number;

	i = 2;
	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		while (i <= number)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number = number / i;
				i = 2;
			}
			i++;
		}
	}
	//printf("\n");
}
