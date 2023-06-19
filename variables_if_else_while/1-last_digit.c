#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * extract the last digit of the variable n
 * and print his statut
 * Return: always 0
 */

int main(void)
{
	int n, der;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	der = n % 10;
	printf("Last digit of %d is", n)
	if (der > 5)
	{
		printf("%d and is greater than 5\n", der);
	}
	else if (der == 0)
	{
		printf("%d and is 0\n", der);
	}
	else if (der < 6 && der != 0)
	{
		printf("%d and is less than 6 and not 0\n", der);
	}
	return (0);
}
