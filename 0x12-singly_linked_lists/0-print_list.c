#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @*h: pointer to linked list of type listint_t to print
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;

		h = h->next;
	}

	return (num);
}
