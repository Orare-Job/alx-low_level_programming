#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalzed
 * Return: A pointer to the changed string
 */

char *cap_string(char *str)
{
	int x, y;

	char sp[13] =  {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
	}
	for (y = 0; y <= 13; y++)
	{
		if (str[x] == sp[y])
		{
			if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				str[x + 1] -= 32;
		}
	}
	return (str);
}
