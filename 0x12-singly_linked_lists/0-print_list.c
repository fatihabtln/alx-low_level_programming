#include "lists.h"

/**
 * _strlen - returns the lenth of the strings.
 * @s: string to count the lenth .
 *
 * Return: the lenth of the string .
 */

int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - print the linked list.
 * @h: pointer the first node .
 *
 * Return: the sieze the linke list .
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
