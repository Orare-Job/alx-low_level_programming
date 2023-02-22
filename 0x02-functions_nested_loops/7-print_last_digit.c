#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @r: The number whose last digit is printed
 * Return: Last digit of a number
 */

int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
