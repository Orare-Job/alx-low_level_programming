#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	return (0);
}
