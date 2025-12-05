#include "lists.h"

/**
* add_node_end - adds a new node at the ending of a linked list
* @head: adds a new node at the beginning of a linked list
* @str: string
*
* return: the address of the new element, or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
	unsigned int len = 0;

	 /* calculer la longueur sans strlen */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Allocation de mémoire de la nouvelle node */
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	/* dupliquer la chaîne demandée */
	newNode->str = strdup(str);

	/* longueur calculer manuellement */
	newNode->len = len;

	/* le nouveau node sera le dernier */
	newNode->next = NULL;

	/* Si la liste chaînée est vide, définissez le nouveau nœud comme tête */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* la tête pointe maintenant sur le nouveau */
	temp->next = newNode;

	return (newNode);
}
