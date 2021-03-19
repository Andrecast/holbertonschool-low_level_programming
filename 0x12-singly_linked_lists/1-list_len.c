#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list -  Function that prints all the elements of a list_t list
 * @h: pointer to the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
/*h es un puntero q apunta a la estructura list_t*/
{
	int cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
