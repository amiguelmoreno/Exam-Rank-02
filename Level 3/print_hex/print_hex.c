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

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(takeNumber(argv[1]));
	}
	write(1, "\n", 1);
}
