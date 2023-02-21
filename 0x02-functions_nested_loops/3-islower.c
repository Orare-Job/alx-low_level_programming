#include "main.h"

/**
 * _islower - Checks whether an alphabet is lower
 * @c: Is the alphabet the test is ran on
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'c' && c <= 'z')
		return (1);
	else
		return (0);
}
