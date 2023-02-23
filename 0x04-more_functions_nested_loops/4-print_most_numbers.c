include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Do not print 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		i++;
		if (i == 1 && i == 3)
			continue;
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
