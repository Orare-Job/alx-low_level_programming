#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, Last_digit);
	if (Last_digit > 5)
		printf("greater than 5\n");
	else if (Last_digit == 0)
		printf("0\n");
	else if (Last_digit < 6 && != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
