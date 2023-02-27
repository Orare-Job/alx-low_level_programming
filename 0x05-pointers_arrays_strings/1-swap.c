#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer to the integer to be swapped
 * @b: Pointer to the integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
