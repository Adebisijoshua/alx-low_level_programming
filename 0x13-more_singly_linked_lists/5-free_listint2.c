/**
 *Name of file : Task 5
*/


#include "lists.h"

/**
 * free_listint2 - allows a link file to list
 * @head: list with the head.
 *
 * Return: It os goign to return nothing
 */
void free_listint2(listint_t **head)
{

	listint_t *curr;
	listint_t *temp;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
