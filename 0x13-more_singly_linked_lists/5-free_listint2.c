#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to pointer to the first node of listint_t list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;

	ptr = *head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	*head = NULL;
}

