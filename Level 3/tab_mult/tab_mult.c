#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putNumber(int number)
{
	if (number / 10 > 0)
		putNumber(number / 10);
	ft_putchar(number % 10 + '0');
}

void	getResult(char *str, int multiply)
{
	int	i;
	int	number;

	number = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			number = 0;
			break ;
		}
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	i = 0;
	number *= multiply;
	putNumber(number);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc == 2)
	{
		while (i <= 9)
		{
			write(1, &"0123456789"[i], 1);
			write(1, " x ", 3);
			while (argv[1][j])
			{
				if (argv[1][j] == '-')
				{
					write(1, "0", 1);
					break ;
				}
				write(1, &argv[1][j], 1);
				j++;
			}
			j = 0;
			write(1, " = ", 3);
			getResult(argv[1], i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
