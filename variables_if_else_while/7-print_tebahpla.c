#include<stdio.h>
/**
 *main - Entry point
 *print alphabet in reverse
 *Return: always 0
 */

int main(void)
{
	int ahpla;

	for (ahpla = 'z'; ahpla >= 'a'; ahpla = ahpla - 1)
	{
		putchar (ahpla);
	}
	{
		putchar('\n');
	}
	return (0);
}
