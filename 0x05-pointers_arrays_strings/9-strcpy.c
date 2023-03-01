#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *   including the terminating null byte (\0)
 * @dest: Where the string is copied to
 * @src: String is copied from
 * Return:The pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
