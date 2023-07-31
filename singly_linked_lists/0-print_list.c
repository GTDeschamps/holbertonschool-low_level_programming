#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - Entry point
 *@h: element of liste
 *return: size_t
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
		{
			printf ("[0] ");
			printf ("(nil)\n");
			h= h->next;
			i++;
		}
		else
		{
			printf ("[%u] ", h->len);
			printf ("%s\n", h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
