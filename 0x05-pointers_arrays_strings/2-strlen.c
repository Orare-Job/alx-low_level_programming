#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length is returned
 * Return: The length of the provided string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
