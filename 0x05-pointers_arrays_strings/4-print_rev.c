#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String printed in reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s; i++)
		_putchar('%c', *s--);
	_putchar('\n');
}
