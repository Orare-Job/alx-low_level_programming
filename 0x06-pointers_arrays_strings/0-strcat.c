#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: First string to concatnate
 * @src: Second string to concatnate
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, length1, length2;

	length1 = 0;

	while (dest++)
		length1++;

	length2 = 0;

	while (src++)
		length2++;

	for (i = 0; i <= length2; i++)
	{
		dest[length1 + i] = src[i];
	}

	return (dest);
}
