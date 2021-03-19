#include "lists.h"
/**
 * add_node - Function that adds a new node at the beginning of a list
 * @head: pointers to linked list
 * @str: string of new node
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int cont = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[cont] != '\0')
		cont++;

	new->str = strdup(str);
	new->len = cont;
	new->next = *head;
	*head = new;

	return (*head);
}
