#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98
 *   followed by a new line
 * @n: Number printed
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
	}

	else
	{
		for (n = 111; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
	}

	putchar('\n');
}
