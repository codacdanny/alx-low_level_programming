#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 *main - function to determine positive and negative integer
 *takes input n and checks it
 *Return: Always 0
 *(Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}

