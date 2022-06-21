#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 *
 * @s: the address of memory area pointed
 * @b: the charactere of constant byte
 * @n: unsigned integers
 * return: memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*declaration for*/
	for ( i = 0, i < n, i++)
	{
		*(s + i) = b; /*add 1 position s*/
	} /* End for*/
	return (s);
}
