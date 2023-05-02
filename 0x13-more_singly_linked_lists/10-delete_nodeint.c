#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * @head: double pointer to the head node
 * @index: position of node to delete
 * Return: success code
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c;
	listint_t *t;
	unsigned int a = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	t = *head;
	*head = (*head)->next;
	free(t);

	return (1);
	}

	c = *head;
	while (c != NULL && a < index - 1)
	{
	c = c->next;
	a++;
	}

	if (c == NULL || c->next == NULL)
	{
	return (-1);
	}

	t = c->next;
	c->next = t->next;
	free(t);

	return (1);
}
