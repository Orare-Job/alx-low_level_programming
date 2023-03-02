#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: First string to concatnate
 * @src: Second string to concatnate
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (*dest)
		i++;

	j = 0;

	while (*src)
	{
		j++;
		dest[i++] = src[j];
	}

	return (dest);
}
