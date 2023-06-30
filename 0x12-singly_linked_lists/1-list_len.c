#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns no.
 * @h: pointer
 *Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
