#include "sort.h"
/**
 * insertion_sort_list - function sorts list using the insertion alg
 * @list: pointer to address of first node of the list Return: return
 * nothing (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev, *next, *node = NULL;

	for (node = (*list); node; node = node->next)
	{
		if (node->prev == NULL)
			node = node->next;
		if (node->n < node->prev->n)
		{
			for (curr = node; node; node = curr)
			{
				prev = curr->prev;
				next = curr->next;
				if (node->n < prev->n)
				{
					prev->next = next;
					if (next)
						next->prev = prev;
					else
						curr->prev = prev->prev;
					if (prev->prev != NULL)
					{
						prev->prev->next = curr;
						curr->prev = prev->prev;
					}
					else if (!prev->prev)
					{
						curr->prev = NULL;
						(*list) = curr;
					}
					curr->next = prev;
					prev->prev = curr;
				}
				else
					break;
				print_list(*list);
				if (node->prev == NULL)
					break;
			}
		}
	}
}
