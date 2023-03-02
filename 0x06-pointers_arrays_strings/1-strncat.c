#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to concatnate and as destination
 * @src: String to concatnate and as source
 * @n: Maxmum byte from src sting
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = 0;

	while (*(dest++))
		len1++;

	len2 = 0;

	while (*(src++))
		len2++;

	for (i = 0; i <= len2 && i < n; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
