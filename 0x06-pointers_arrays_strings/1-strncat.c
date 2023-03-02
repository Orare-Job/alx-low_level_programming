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
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
