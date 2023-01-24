#include "sort.h"

/**
 * insertion_sort_list - insertion sort algorithm
 * @list: pointer to head of list
 * */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr;

	ptr = *list;
	while (ptr)
	{
		if (ptr->n > ptr->next->n)
		{
			tmp = ptr;
			ptr = ptr->next;
			ptr->next = tmp;
			print_list(*list);
		}
	}
}
