#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the first node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *a;

	while (*head != NULL)
	{
	a = *head;
	*head = (*head)->next;
	free(a);
	}

	*head = (NULL);
}
