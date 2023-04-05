#include "lists.h"

/**
* print_listint_safe -  prints a listint_t linked list.
*
* @head: pointer to the first node of the list
*
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)

{
	size_t no_of_nodes = 0;

	const listint_t *temp = head, *temp2;

	temp2 = NULL;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		no_of_nodes++;

		if (temp >= temp2)
			temp2 = (void *)temp;

		else
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}

		temp = temp->next;
	}
	return (no_of_nodes);
}
