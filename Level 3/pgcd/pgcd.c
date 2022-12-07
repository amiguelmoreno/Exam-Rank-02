#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	result;
	int	a;
	int	b;

	i = 0;
	result = 0;
	if (argc == 3 && ((a = atoi(argv[1])) > 0 && (b = atoi(argv[2])) > 0))
	{
		//a = atoi(argv[1]);
		//b = atoi(argv[2]);
		while (i <= a && i <= b)
		{
			if (a % i == 0 && b % i == 0)
			{
				result = i;
			}
			i++;
		}
		printf("%d", result);
	}
	printf("\n");
}
