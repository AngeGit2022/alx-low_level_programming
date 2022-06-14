#include "main.h"

/**
 * swap-int - swap the values of two integers
 *
 * @a : integer
 * @b : integer
 * return : always 0
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
