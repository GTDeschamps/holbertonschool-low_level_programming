#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * program assign a random number n to the variable each time is executed
 * if the number is positif, print positive
 * if the number is negative, print négative
 */

/**
 * main -Entry point
 *return : always 0
 */

int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("%d is positive \n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative \n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
		return (0);
	}
