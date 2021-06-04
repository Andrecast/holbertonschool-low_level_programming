#include "lists.h"
/**
 *add_nodeint_end - Function that adds a new node at the end of a list
 *@head: pointer to a pointer to the head of a linked list
 *@n: integer into the nodes
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *final;

	new = malloc(sizeof(listint_t));
	if (new == NULL)/* check memory*/
		return (NULL);
	new->n = n;
	new->next = NULL; /*new now at the end*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		final = *head;
		while (final->next != NULL)/*Mientras no sea el último*/
		{
			final = final->next;/**/
		}
		final->next = new;  /*new va a la cola*/
	}
	return (*head);
}
