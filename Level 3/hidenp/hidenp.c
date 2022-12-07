#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i + 1] == '\0' && argv[1][i] == argv[2][j])
				{
					write(1, "1", 1);
					break ;
				}
				if (argv[1][i] == argv[2][j])
				{
					break ;
				}
				j++;
			}
			i++;
			if (argv[1][i] && !argv[2][j])
			{
				write(1, "0", 1);
				break ;
			}
		}
	}
	write(1, "\n", 1);
}
