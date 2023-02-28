#include "main.h"

/**
 * puts2 - prints every other character of a string
 *     starting with the first character
 * @str: String that is printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i+)
		_putchar(str[i]);
	_putchar('\n');
}
