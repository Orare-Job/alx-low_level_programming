#include "main.h"

/**
 * _isalpha - Checks whether a character is an alphabet
 * @c: Is the character being checked
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= Z'))
		return (1);
	else
		return (0);
}
