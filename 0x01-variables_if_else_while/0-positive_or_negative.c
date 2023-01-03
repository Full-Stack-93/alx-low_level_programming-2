#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print out random numbers, indicate whether positive, negative, zero
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check for whether n is positive */
	if (n > 0)
	{
		/* if condition is true, print the following */
		printf("%d is positive\n", n);
	}
	/* check for whether n is negative */
	else if (n < 0)
	{
		/* if condition is true, print the following */
		printf("%d is negative\n", n);
	}
	/* check for remaining condition */
	else
	{
		/* if condition is true, print the following */
		printf("%d is zero\n", n);
	}
	return (0);
}
