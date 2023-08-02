#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * Description:  add in the list
 * @head: start the list
 * @index: index of the list
 * Return: void
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
