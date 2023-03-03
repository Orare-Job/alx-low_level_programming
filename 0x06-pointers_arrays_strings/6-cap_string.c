#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalzed
 * Return: A pointer to the changed string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
			|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}' || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++
		}
	}
	return (str);
}