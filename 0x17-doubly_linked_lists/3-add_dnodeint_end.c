/*
 * File Name: 3-add_dnodeint_end.c
 * Authpr Name: Adekunle Joshua Adebisi
 */

#include "lists.h"

/**
 * add_dnodeint_end - Put  a new node at the end of a dlistint_t list.
 * @head: point to  the head of the dlistint_t list.
 * @n:  integer for the new node to contain.
 *
 * Return: NULL- If the function fails
 *         Otherwise - give address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new); /* return value */
}
