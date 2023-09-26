#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head;
    size_t num_nodes;

    /* Create a sample linked list */
    listint_t node1, node2, node3;
    node1.n = 1;
    node1.next = &node2;
    node2.n = 2;
    node2.next = &node3;
    node3.n = 3;
    node3.next = NULL;
    head = &node1;

    /* Call the print_listint function and store the number of nodes */
    num_nodes = print_listint(head);

    printf("Number of nodes: %lu\n", num_nodes);

    return (0);
}

