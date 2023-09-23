#include "sort.h"

/**
 *insertion_sort_list - sort the list ascending by insertion sort
 *
 *@list: doubly linked list of numbers to be sorted
 *
 *Return: nothin
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *key, *cur, *temp, *iter;

	if (!list || !(*list) || !(*list)->next)
		return;

	key = (*list)->next;
	cur = *list;

	while (key)
	{
		iter = cur;
		temp = key;

		key = key->next;

		while (iter && (iter->n > temp->n))
		{
			if (temp->next)
				temp->next->prev = iter;
			if (iter->prev)
				iter->prev->next = temp;

			temp->prev = iter->prev;
			iter->prev = temp;

			iter->next = temp->next;
			temp->next = iter;

			iter = temp->prev;
			if (!iter)
				*list = temp;
			print_list(*list);
		}
		if (key)
			cur = key->prev;
	}
}
