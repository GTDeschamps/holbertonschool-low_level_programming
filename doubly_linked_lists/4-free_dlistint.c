#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - Entry point
 * Description:  add in the list
 * @head: start the list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	dlistint_t *prev;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		prev = current->prev;
		free(current->next);
		free(current->prev);
		free(current);
		current = next;
		current = prev;
	}
}
