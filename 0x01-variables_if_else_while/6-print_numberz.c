#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 48;
	do {
		putchar(x);
		x++;
	} while (x < 58);
	putchar('\n');
	return (0);
}
