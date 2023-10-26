
#include "lists.h"

/**
 * free_listint - allows a listint_t list.
 * @head: It is a pointer to the location of
 *        head of the listint_t list.
 *
 * Description: Let the head be at the null
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
