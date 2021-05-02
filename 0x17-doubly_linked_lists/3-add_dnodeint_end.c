#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the head pointer of the list
 * @n: data in new node
 * Return: the address of the new element, or NULL if it failed
 * Description: function that adds a new node at the end of a list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = NULL;

	if (head == NULL)/*si el doble puntero es NULL, no hay nada*/
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;/*le asigno NULL porq va a ser el último nodo*/
	new->n = n;/*le asigno el número que va a llevar*/

	while (tmp->next != NULL)/*si es igual a NULL, ahí pierdo de vista la lista*/
		tmp = tmp->next;/*avance a traves de los nodos*/
	/*Ahora uno los nodos en ambos sentidos*/
	tmp->next = new;
	new->prev = tmp;

	/*Mientras la lista no esté vacía*/
	if (*head != NULL)
	{
		new->prev = *head;
	}
	return (new);
}
