#include "lists.h"

/**
  * free_listint2 - ...
  *
  * @head: ...
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	
	}

	(*head) = NULL;
}
