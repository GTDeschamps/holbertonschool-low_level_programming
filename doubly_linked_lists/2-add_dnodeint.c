#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Entry point
 * Description:  add in the list
 * @head: start the list
 * @n: element of list
 * Return: list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dnodeint;

	new_dnodeint = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_dnodeint == NULL)
	{
		return (NULL);
	}

		new_dnodeint->n = n;
		new_dnodeint->prev = NULL;
		new_dnodeint->next = *head;

		if (*head != NULL)
		{
			(*head)->prev = new_dnodeint;
		}

		*head = new_dnodeint;
		return (new_dnodeint);
}
