#include <stdlib.h>
#include <stdio.h>
#include <time.h>
<<<<<<< HEAD

/* more headers goes there */
/**
 *main - function to determine positive and negative integer
 *takes input n and checks it
 *Return: Always 0
 *(Success)
=======
#include <stdio.h>

/* more headers goes there */
/**
 * main - function that checks positive 
 * and negative numbers
 * Return: Always 0
 * (Succes)
>>>>>>> 3158860ffd61eeda9707dfd0d59d4691625c95e0
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
<<<<<<< HEAD
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
=======
		printf("%d is positive\n",n);
	} elseif (n < 0)
	{
		printf("%d is negative\n",n);
	} else
	{
		printf("%d is zero\n",n);
>>>>>>> 3158860ffd61eeda9707dfd0d59d4691625c95e0
	}

	return (0);
}

