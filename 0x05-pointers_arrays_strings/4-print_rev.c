#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String printed in reverse
 */

void print_rev(char *s)
{
	int i,n;
	char x[n];
	*s = x;

	for (i = n; i > 0; i--)
	{
		if (i != '\0')
			_putchar('%c', x[i]);
	}
	_putchar('\n');
}
