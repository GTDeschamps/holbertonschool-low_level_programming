#include "main.h"
/**
 *swap_int - entry point
 *@a: int
 *@b: int
 * Return: swap int
 */
void swap_int(int *a, int *b)
{
	int temporaire = 0;

	temporaire = *b;
	*b = *a;
	*a = temporaire;
}
