#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: input header pointer
 * @n: Input data int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *newNode;
	listint_t *oldnode;

	newnode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		oldnode = *head;
		while (oldnode->next != NULL)
			oldnode = oldnode->next;
		oldnode->next = newNode;
	}
	return (*head);
}
