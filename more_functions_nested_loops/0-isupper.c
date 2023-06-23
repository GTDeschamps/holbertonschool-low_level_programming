#include "main.h"
/**
 *_isupper - Entry Point
 *@c: character
 *Return: 0 ou 1
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
