#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *samson, *boy;

	if (head == NULL || head->next == NULL)
		return (NULL);

	samson = head->next;
	boy = (head->next)->next;

	while (boy)
	{
		if (samson == boy)
		{
			samson = head;

			while (samson != boy)
			{
				samson = samson->next;
				boy = boy->next;
			}
			return (samson);
		}

		samson = samson->next;
		boy = (boy->next)->next;
	}
	return (NULL);
}

