#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: String to print half
 */

void puts_half(char *str)
{
	int i, len1, len2;

	len1 = 0;
	while (*str++)
	{
		len1++;
	}
	if (len1 % 2 == 0)
		len2 = len1 / 2;
	else
		len2 = (len1 + 1) / 2;
	for (i = 0; i < len2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
