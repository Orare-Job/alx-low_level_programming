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

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
