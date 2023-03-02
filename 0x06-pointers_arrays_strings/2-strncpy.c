#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string is copied to
 * @src: Source string is copied from
 * @n: Maximum number of bytes to copy from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
