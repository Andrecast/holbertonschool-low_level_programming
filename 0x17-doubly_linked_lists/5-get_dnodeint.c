#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head pointer of the list
 * @index: data in new node
 * Return: if the node does not exist, return NULL
 * Description: function that returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p_node = head;
	unsigned int i;

	if (head == NULL)/*si el doble puntero es NULL, no hay nada*/
		return (NULL);
	for (i = 0; i < index; i++)
	{
		p_node = p_node->next;/*así se recorren los nodos*/
		/*el puntero p_node va a ir apuntando a cada nodo hasta llegar al index*/
	}
	return (p_node);/*retorna el nodo al que está apuntando*/
}
