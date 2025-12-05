#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

    /* parcourt la liste */
	while (head)
	{
/* sauvegarde du node suivant dans temp */
		temp = head->next;
    /* libère la node copié */
		free(head->str);
    /* puis libère le noeud lui-même */
		free(head);
    /* et on avance */
		head = temp;
	}
}