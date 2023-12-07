/*
 * File Name: 0-print_dlistint.c
 * Author Name: Adekunle Joshua Adebisi
 */

#include "lists.h"

/**
 * print_dlistint - This will prin all the element of the distinct-files
 * @h: The head to the distinct file list
 *
 * Return: The number of nodes that will be printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes); /* return on node */
}
