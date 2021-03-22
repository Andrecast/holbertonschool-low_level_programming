#include "lists.h"
/**
 *pop_listint- Function that deletes the head node of a listint_t linked list
 *@head: pointer to a pointer to the head of a linked list
 *Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	else
	{
	tmp = *head;
	i = tmp->n;/*n del primer nodo*/
	tmp = tmp->next;
	free (*head);
	*head = tmp;
	}
	return (i);
}
