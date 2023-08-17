#include "lists.h"

/**
 * free_dlistint - frees a dlist 
 * @head :pointer to currenthead node
 *
 * return : void 
 */
void free_dlistint(dlistint_head)
	dlistint_t *node;
	while (head)
{
	node = head;
	head = head->next;
	free(node);
}
