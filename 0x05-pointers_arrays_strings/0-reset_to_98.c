#include "main.h"

/**
 * reset_to_98 - modify a integer
 *
 * @int: param int 
 * return: always 0
 */
void reset_to_98(int *n)
{
	*n = 45;
	printf("n=%d\n", n);
	reset_to_98(&*n);
	printf("n=%d\n", n);
	return (0);
}
