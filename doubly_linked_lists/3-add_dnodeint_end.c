#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 * Description:  add in the list
 * @head: start the list
 * @n: element of list
 * Return: list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dnodeint;

	new_dnodeint = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_dnodeint == NULL)
	{
		return (NULL);
	}

	new_dnodeint->n = n;
	new_dnodeint->prev = NULL;
	new_dnodeint->next = NULL;

	if (*head == NULL)
	{
		*head = new_dnodeint;
		}
		else
		{
			dlistint_t *current = *head;

			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = new_dnodeint;
			new_dnodeint->prev = current;
		}

		return (new_dnodeint);
}
