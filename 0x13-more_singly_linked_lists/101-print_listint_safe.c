#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: the number of nodes in the list, if the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *jungkook, *kim;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	jungkook = head->next;
	kim = (head->next)->next;

	while (kim)
	{
		if (jungkook == kim)
		{
			jungkook = head;
			while (jungkook != kim)
			{
				nodes++;
				jungkook = jungkook->next;
				kim = kim->next;
			}

			jungkook = jungkook->next;
			while (jungkook != kim)
			{
				nodes++;
				jungkook = jungkook->next;
			}

			return (nodes);
		}

		jungkook = jungkook->next;
		kim = (kim->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
