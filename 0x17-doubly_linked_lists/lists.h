#ifndef LISTS_H
#define LISTS_H

/*
 * File Name : lists.h
 * Author Name : Adekunle Joshua Adebisi
 * Adekunle8k@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer of the file
 * @prev: pointer of the previous node
 * @next: pointer of the next node
 *
 * Description: doubly linked list node structure
 * for ALX_lOW-level_programming_language
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
