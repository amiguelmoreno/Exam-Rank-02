#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	//i = 0;
	j = 1;
	if (argc >= 2)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				if ((argv[j][i] >= 'A' && argv[j][i] <= 'Z'))
				{
					argv[j][i] = argv[j][i] + 32;
				}
				if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i
						- 1] == ' ' || argv[j][i - 1] == '\t' || argv[j][i
						- 1] == '\0'))
				{
					argv[j][i] = argv[j][i] - 32;
				}
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
