#include <stdio.h>
#include "lists.h"

/**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Return: The number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		
		{
			h = h->next;
			count++;
		}

	return (count);
}
