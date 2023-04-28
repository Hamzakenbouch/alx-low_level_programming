#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -function
 * @head: pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tp = *head;
	unsigned int j = 0;

	while (str[j])
		j++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = j;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tp->next)
		tp = tp->next;
	tp->next = new_node;
	return (new_node);
}
