#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: thelinked list
  *
  * Return: the number of elements in the list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
