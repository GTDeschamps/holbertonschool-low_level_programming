#include <stdio.h>
/**
 *main - Entry point
 *print alphabet in lowercase and uppercase
 *Return: always 0
 */

int main(void)
{
	int alpha;
	int beta;
		for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
		{
			putchar (alpha);
		}
		for (beta = 'A'; beta <= 'Z'; beta = beta + 1)
		{
			putchar (beta);
		}
		{
			putchar ('\n');
		}
	return (0);
}
