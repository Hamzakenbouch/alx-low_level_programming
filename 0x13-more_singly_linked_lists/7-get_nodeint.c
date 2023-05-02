#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to the head node
 * @index: the index of the node to be returned
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int n = 0;

	while (p != NULL && n < index)
	{
	p = p->next;
	n++;
	}

	if (p != NULL)
	{
	return (p);
	}

	else
	{
	return (NULL);
	}
}
