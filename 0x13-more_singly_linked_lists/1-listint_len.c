#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list.
*@h: pointer to the first node
*Return: number of elements
*/

size_t listint_len(const listint_t *h)

{
	size_t count = 0;

	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
