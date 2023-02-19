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
		printf("\n");
	} while (x < 10);
	return (0);
}
