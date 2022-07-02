#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Program entry point
 *
 *Return:  0 on success. Error code otherwise
 */
int main(void)
{
int n, f;

srand(time(0));
n = rand() - RAND_MAX / 2;
f = n % 10;
/* your code goes there */
if (f > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, f);
}
else if (f == 0)
{
printf("Last digit of %d is %d and is 0\n", n, f);
}
else if (f < 6 && f != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f);
}
return (0);
}
