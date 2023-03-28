#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: integer 1.
 * @b: integer 2.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
