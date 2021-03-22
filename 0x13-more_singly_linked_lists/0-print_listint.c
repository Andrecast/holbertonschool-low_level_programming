#include "lists.h"
/**
 * print_listint -  Function that prints all the elements of a listint_t list
 * @h: pointer to the structure
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
/*h es un puntero q apunta a la estructura listint_t*/
{
	int cont = 0;/* recorre los nodos */

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
