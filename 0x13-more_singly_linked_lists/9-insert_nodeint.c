#include "lists.h"

/**
* insert_the_file - give a new node at a placed position.
* @head: It is a pointer to the head of the list.
* @idx: The rate at which the new node should be placed.
* @n: This is  integer num to put  to the new node.
*
* Return: The location of the created node, or NULL if it fails.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
temp = *head;

if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}

while (i < idx - 1)
{
if (temp == NULL)
{
free(new_node);
return (NULL);
}
temp = temp->next;
i++;
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}

