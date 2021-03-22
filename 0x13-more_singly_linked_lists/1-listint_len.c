#include "lists.h"
/**
 * listint_len -  Function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to the structure
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
/*h es un puntero q apunta a la estructura listint_t*/
{
	int cont = 0;/* recorre los nodos */

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
