#include <stdio.h>
#include "main.h"

/**
 *main - main entry of my program
 *
 *@argc : number of argument
 *
 *@argv : size of array argument
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
