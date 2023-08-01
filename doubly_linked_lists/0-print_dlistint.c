#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_dlistint - Entry point
 *@h: element of liste
 *Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *present = h;
	size_t node = 0;

	while (present != NULL)
	{
		printf("%d\n", present->n);
			present = present->next;
			node++;
	}
	return (node);
}
