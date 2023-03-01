#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *   including the terminating null byte (\0)
 * @dest: Where the string is copied to
 * @src: String is copied from
 * Return:The pointer to dest
 */

char _strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}
