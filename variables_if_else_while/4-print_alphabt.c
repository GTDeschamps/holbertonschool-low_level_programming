#include <stdio.h>
/**
 *main - Entry point
 *print the alphabet exclude letters e & q
 *Return: always 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha = alpha + 1)
	{
		if ((alpha != 'e') && (alpha != 'q'))
		{
			putchar (alpha);
		}
	}
	{
	putchar ('\n');
	}
	return (0);
}
