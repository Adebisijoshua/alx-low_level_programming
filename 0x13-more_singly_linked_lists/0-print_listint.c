#include "lists.h"

/**
 * print_listint - It will lists all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: It will give the values of node
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
