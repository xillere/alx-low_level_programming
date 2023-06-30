#include <stdio.h>
#include "main.h"

/**
 * print_list - prints list
 * @h: pointer
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}