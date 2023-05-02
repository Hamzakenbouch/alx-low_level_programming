#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double pointer to the head node
 * @idx: position to insert node
 * @n: value of n memeber in the inserted node
 *Return: address of th inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *x;
	unsigned int a = 0;

	if (head == NULL)
	return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	x = *head;
	while (x != NULL && a < idx - 1)
	{
	x = x->next;
	a++;
	}

	if (x == NULL)
	{
	free(new);
	return (NULL);
	}

	new->next = x->next;
	x->next = new;
	return (new);
}
