#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String
 * @s2: String
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	char *ss1 = s1;
	char *ss2 = s2;

	while (*ss1 != '\0' && *ss2 != '\0' && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
