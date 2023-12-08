/*
 * File Name : 2-add_dnodeint.c
 * Auth: Adekunle Joshua Adebisi
 */

#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the  beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - give NULL
 *         Otherwise - the address for the new Node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new); /* Return */
}
