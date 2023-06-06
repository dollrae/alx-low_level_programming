#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: point to the first element in the linked list
 *
 * Return: head node’s data (n),
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
