#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element;

	if (element == NULL)
	{
		return (NULL);
	}

	element->value = str;
	element->next = NULL;

	if (head)
	{
	return (element);
	}

	list_t *temp;
	temp = str;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = element;
	return (head);
}
