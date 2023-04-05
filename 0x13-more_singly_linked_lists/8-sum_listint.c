#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @head: pointer to the fitst node of the linked list
*
* Return: sum of all the data (n) of the linked list, or 0 if the list is empty
*/

int sum_listint(listint_t *head)

{
	int sum_of_data = 0;

	listint_t *ptr = head;

	if (head == NULL)
		return (0);

	else
	{
		while (ptr != NULL)
		{
			sum_of_data += ptr->n;
			ptr = ptr->next;
		}
	return (sum_of_data);
	}
}
