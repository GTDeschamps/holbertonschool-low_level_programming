#include <stdio.h>
/**
 *main - Entry point
 *print the alphabet in lowercase
 *Return: always 0
 */

int main(void)
{
	int alpha;
		for (alpha = 'a'; alpha < 'z'; alpha = alpha + 1)
		{
			putchar (alpha);
		}
	return (0);
}
