#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
*@h: pointer to the first node
*Return: n, no of nodes.
*/

size_t print_listint(const listint_t *h)

{
	size_t no_of_nodes = 1;

	/* Empty list*/
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		/*prints the first node*/
		printf("%d", h->n);

		/*moves to the next node*/
		h = h->next;

		/*counts the no of nodes*/
		no_of_nodes++;
	}

	/*prints thr last node*/
	printf("%d", h->n);

	return (no_of_nodes);
}
