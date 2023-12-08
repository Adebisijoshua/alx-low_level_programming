/*
 * File Name: 5-get_dnodeint.c
 * Author : Adekunle Joshua Adebisi
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - Searches a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node that will be located locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
