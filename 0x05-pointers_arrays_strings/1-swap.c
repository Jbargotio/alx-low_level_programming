#include "main.h"

/**
 * swap_int- swap integers
 * @a : pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
