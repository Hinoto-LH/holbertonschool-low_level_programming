#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @head: adds a new node at the beginning of a linked list
*
* return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/* l'ancien début devient suivant du nouveau */
	newNode->next = *head;
	/* la tête pointe maintenant sur le nouveau */
	*head = newNode;

	return (newNode);
}
