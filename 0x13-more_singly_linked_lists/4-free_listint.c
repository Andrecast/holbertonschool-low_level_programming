#include "lists.h"
/**
 *free_listint - Function that frees a list
 *@head: pointer to the linked list
 *Return: No return
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;/*crear un nodo temporal*/

	while (head != NULL)
	{
		tmp = head->next;/*el puntero apunta al 1er nodo*/
		/*así no lo pierdo de vista*/
		free(head);/*libera la memoria asignada a la lista*/
		head = tmp;
	}
}
