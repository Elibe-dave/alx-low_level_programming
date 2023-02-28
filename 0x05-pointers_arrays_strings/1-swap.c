#include "main.h"
/**
 * swap_int - this swaps the values of two integers
 * @a: integer 1 to swap
 * @b: integer 2 to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
