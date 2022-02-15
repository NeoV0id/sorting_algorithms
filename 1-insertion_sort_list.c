#include "sort.h"
#include <stdlib.h>

/**
 * _lenof - count size of list
 * @list: list to count
 *
 * Return: size of list
 */

size_t lenof(listint_t **list)
{
	unsigned int i = 0;
	listint_t *count;

	count = malloc(sizeof(listint_t));
	count = *list;

	while (count->next != NULL)
	{
		count = count->next;
		i++;
	}

	return (i);
}

/**
 * insertion_sort_list - sorts doubly linked lists
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *n;
	listint_t *tmp;

	n = malloc(sizeof(listint_t));
	n = *list;

	if (n == NULL)
		return;
	else if (lenof(list) <= 2)
                return;
	while (n->next != NULL)
	{
		if (n->next < n)
		{
			tmp = n->next;
			while (tmp < n->prev)
			{
				n = n->prev;
				if (tmp > n->prev)
				{
					n->prev->next = tmp;
					n->prev = tmp;
					print_list(list);
				}
			}
		}
		n = n->next;
	}
	
}
