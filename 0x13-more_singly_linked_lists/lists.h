ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/*
 * File: lists.h
 * Desc: Header file containing prototypes and definitions for all functions
 * and types written in the 0x13-more_singly_linked_lists directory.
 */

/**
 * struct listint_s - singly linked list
 * @next: points to the next node
 * @n : integer
 * Description: singly linked list node structure
  */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_s;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif // LISTS_H