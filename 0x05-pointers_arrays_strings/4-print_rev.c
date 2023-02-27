#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String printed in reverse
 */

void print_rev(char *s)
{
	int len, index;

	while (s[index++])
		len++;
	for (index = len - 1; index > 0; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}
