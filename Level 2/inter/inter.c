#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	ascii[128];

	i = 0;
	while (i < 128)
	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && ascii[argv[1][i]] == 0)
				{
					ascii[argv[1][i]] = 1;
					write(1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
