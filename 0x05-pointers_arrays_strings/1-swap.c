#include "main.h"

/**
 * swap_int - swaps value
 * @a: params
 * @b: params
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
