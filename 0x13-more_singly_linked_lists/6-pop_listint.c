#include "lists.h"

/**
 * pop_listint - remove  head node of
 * a linked list
 * @head:list with the head of the node.
 *
 * Return: the data is the head of the node.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *curr;
	listint_t *h;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
