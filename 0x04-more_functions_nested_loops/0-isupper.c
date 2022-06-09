#include "main.h"

/**
 * main - checks for uppercase character
 *
 * returns 1 if c is uppercase
 * returns 0 otherwise
 */
int _isupper(int c)
{

	while(c)
	{
		if (c = 'A', c <= 'Z', c++)
		{
			_putchar(c);
			return (1);
		}
		else
			_putchar(c);
		return (0);
	}
}
