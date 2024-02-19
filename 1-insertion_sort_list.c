#include "sort.h"
/** insertion_sort_list - function sorts list using the insertion sotring
 * algorithm @list: pointer to address of first node of the list Return: return
 * nothing (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL;
	listint_t *prev, *next, *temp = NULL;
	listint_t *node = (*list);

	while (node)
	{
		temp = node->next;
		if (node->prev == NULL)
			node = node->next;

		if (node->n < node->prev->n)
		{
			curr = node;
			while (node)
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
					node = curr;
				}
				else
					break;
				print_list(*list);

				if (node->prev == NULL)
					break;
				
			}
		}
		node = temp;
	}
}
