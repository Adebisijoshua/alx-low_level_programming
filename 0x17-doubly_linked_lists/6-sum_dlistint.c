/*
 * File Name: 6-sum_dlistint.c
 * Author Name: Adekunle Joshua Adebisi
 *      Adekunle8k@gmail.com
 */

#include "lists.h" /* header */

/**
 * sum_dlistint - add all the data of a dlistint_t list.
 * @head: Give head of the dlistint_t list.
 *
 * Return: The addition of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
