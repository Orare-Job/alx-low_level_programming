#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String printed in reverse
 */

void print_rev(char *s)
{
	int i,n;

	for (i = n - 1; s[n] && i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
