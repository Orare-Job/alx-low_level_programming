#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 0;
	do {
		printf("%d", x);
		x++;
	} while (x < 10);
	putchar('\n');
	return (0);
}
