#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		prev = current->prev;
		temp = current;

		while (prev && prev->n > temp->n)
		{
			if (temp->next)
				temp->next->prev = prev;
			prev->next = temp->next;
			temp->prev = prev->prev;
			if (prev->prev)
				prev->prev->next = temp;
			else
				*list = temp;
			prev->prev = temp;
			temp->next = prev;
			prev = temp->prev;
			print_list(*list);
		}

		current = current->next;
	}
}
