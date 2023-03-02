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
	int i, len;

	len = 0;

	while (*(src++))
		len++;

	for (i = 0; i <= len && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
		dest[i] = '\0';

	return (dest);
}
