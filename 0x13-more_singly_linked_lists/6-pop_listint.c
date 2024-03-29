#include "lists.h"

/**
 * pop_listint -deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the first element
 *
 * Return: the data inside the elements that deleted
 * or if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head||!*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
