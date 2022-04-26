#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a list
 * 
 * @head: points to start of list
 * 
 * Return: pointer to beginning of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
