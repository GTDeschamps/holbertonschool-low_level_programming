#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *dlistint_len - Entry point
 *@h: element of liste
 *Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
