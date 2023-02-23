#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int z, y;

	if (n > 0)
	{
		for (z = 0; z < n; z++)
		{
			for (y = 0; y < z; y++)
				_putchar(' ');
			_putchar('\\');

			if (z == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
