#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - appends the src string to the dest string
 * main - check the code
 *
 * @dest: A string to an char will be changed
 * @src: A string to an char will be also changed
 * return: always 0
 */
int main(void)
{
	char src[] = "debut\n";
	char dest[50] = "fin\n";

	_strcat(dest, src);
	/* affiche : "debutfin"*/
	_putchar (dest);
	_putchar ('\n');
	return (0);
}
