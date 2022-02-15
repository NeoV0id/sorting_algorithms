#include "sort.h"
#include <stdlib.h>

/**
 * lenof - count size of list
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
	listint_t *node;
	listint_t *tmp, *tmprev1, *tmprev2, *tmprev3;

	node = malloc(sizeof(listint_t));
	node = *list;

	if (node == NULL)
		return;
	else if (lenof(list) <= 2)
		return;
	while (node != NULL)
	{
		if ((node->prev != NULL) && (node->n < node->prev->n))
		{
			tmp = node->prev->prev;
			tmprev1 = node->prev;
			tmprev2 = node;
			tmprev3 = node->next;

			tmprev1->next = tmprev3;
			if (tmprev3 != NULL)
				tmprev3->prev = tmprev1;

			tmprev2->next = tmprev1;
			tmprev2->prev = tmp;
			if (tmp != NULL)
				tmp->next = tmprev2;
			else
				*list = tmprev2;
			tmprev1->prev = tmprev2;
			node = *list;
			print_list(*list);
			continue;
		}
		else
			node = node->next;
	}

}
