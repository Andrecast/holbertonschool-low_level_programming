#include "lists.h"
/**
 *free_listint2 - Function that frees a list
 *@head: pointer to a pointer to the head of a linked list
 *Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;/*crear un nodo temporal*/

	while (*head != NULL)
	{
		tmp = (*head)->next;/*el puntero apunta al 1er nodo*/
		/*así no lo pierdo de vista*/
		free(*head);/*libera la memoria asignada a la lista*/
		*head = tmp;
	}
    head = NULL;/*ahora **head apunta a NULL*/
}
