#include "lists.h"

/**
 * list_len - count lists .
 *
 * @h: pinter to the first node .
 *
 * Return:  number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
