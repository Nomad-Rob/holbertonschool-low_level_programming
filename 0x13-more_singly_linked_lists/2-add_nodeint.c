#include "lists.h"
/**
 * add_nodeint - adds a node at the beginnning of linked list
 * @head: head of list
 * @n: int to add into node
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
