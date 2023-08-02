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

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->next);
		free(current);
		current = next;
	}
}
