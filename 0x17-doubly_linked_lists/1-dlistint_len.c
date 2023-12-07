/*
 * File name: 1-dlistint_len.c
 * Author's name: Adekunle Joshua Adebisi
 */

#include "lists.h"

/**
 * dlistint_len - Calculate the value of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list in the file.
 *
 * Return: The value of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
