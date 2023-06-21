#include"main.h"
/**
 *_abs - Entry point
 *@n: nomber
 *Return: n or -n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}
	return (0);
}
