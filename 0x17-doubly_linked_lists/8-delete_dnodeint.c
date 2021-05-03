#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: pointer to the head pointer of the list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 * Description: function that deletes the node at index index of a list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	del = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (del ==  NULL)
			return (-1);
		del = del->next;
	}
	del->prev->next = del->next;
	del->next->prev = del->prev;
	free(del);
	return (1);
}
