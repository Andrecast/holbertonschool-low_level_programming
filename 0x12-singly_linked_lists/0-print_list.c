#include "lists.h"

size_t print_list(const list_t *h)/*h es un puntero q apunta a la estructura list_t*/
{
	int cont = 0;

	while (h != NULL)
	{
		if (h->str ==   NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cont++;
	}
	return (cont);
}
