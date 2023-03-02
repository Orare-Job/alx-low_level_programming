#include "main.h"

/**
 * string_toupper - Changes all lowercase letter
 *     of a string to uppercase
 * @str: String changed to upper case
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}

