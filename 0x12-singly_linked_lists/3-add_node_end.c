#include "lists.h"
/**
 *add_node_end - Function that adds a new node at the end of a list
 *@head: pointer to a pointer to the head of a linked list
 *@str: string to be added to the list_t list
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *final;
	unsigned int cont = 0;

	while (str[cont] != '\0')/*longitud del string*/
	{
		cont++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)/* check memory*/
		return (NULL);
	new->str = strdup(str);/*duplica str*/
	new->len = cont;
	new->next = NULL; /*new now at the end*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		final = *head;
		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = new;  /*new at the end */
	}
	return (*head);
}
