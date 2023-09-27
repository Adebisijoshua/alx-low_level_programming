#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *prev;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    temp = *head;

    if (index == 0)
    {
        *head = temp->next;
        free(temp);
        return (1);
    }

    while (i < index)
    {
        prev = temp;
        temp = temp->next;
        if (temp == NULL)
            return (-1);
        i++;
    }

    prev->next = temp->next;
    free(temp);
    return (1);
}

