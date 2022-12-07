#include <unistd.h>

int	takeNumber(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i])
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (number);
}

void	putNumber(int c)
{
	if (c > 9)
	{
		putNumber(c / 10);
	}
	write(1, &"0123456789"[c % 10], 1);
}

int	main(int argc, char **argv)
{
	int	number;
	int	i;
	int	j;
	int	result;

	i = 2;
	j = 2;
	result = 2;
	if (argc == 2 && takeNumber(argv[1]) > 1)
	{
		number = takeNumber(argv[1]);
		while (i <= number)
		{
			while (j <= i)
			{
				if (i % j == 0 && i != 2 && j % 2 != 0)
				{
					result += i;
				}
				j++;
			}
			i++;
		}
		putNumber(result);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
