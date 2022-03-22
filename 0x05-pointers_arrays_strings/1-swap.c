#include "main.h"
/**
 * swap_int - Swap the ints
 * @a: first int to swap
 * @b: Second it to swap
 *
 * Result: Returns nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
