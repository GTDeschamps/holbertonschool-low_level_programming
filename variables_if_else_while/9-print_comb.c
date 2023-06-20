#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - Entry point
 *print all possible combinations of single digit numbers
 *must be separated by , follow by a space
 *Return: always 0
 */

int main(void)
{
	int dgt = 0;

	for (dgt = 0; dgt < 10; dgt = dgt + 1)
	{
		putchar ('0' + dgt);
		if (dgt < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	{
		putchar ('\n');
	}
	return (0);
}
