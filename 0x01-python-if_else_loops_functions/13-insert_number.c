#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_node - Writing a fxn that inserts a number
 * into a sorted singly linked list
 * @head: pointer to address of head of list
 * @number: integer to be include in new node
 * Return: address of new node, or NULL if it failed
 *
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *charr;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = number;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else if (number <= (*head)->n)
	{
		newnode->n = number;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		charr = *head;
		while (charr->next != NULL && number > charr->next->n)
		{
			charr = charr->next;
		}
		newnode->n = number;
		newnode->next = charr->next;
		charr->next = newnode;
		return (newnode);
	}
	return (NULL);
}
