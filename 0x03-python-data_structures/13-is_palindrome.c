#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int is_palindrome(listint_t **head)
{
  listint_t *nhead, *trt, *dash, *prt;
  listint_t *cut = NULL, *half, *T1, *T2;

  if (!head || !*head)
    return (1);

  nhead = *head;
  if (nhead->next != NULL)
    {
      for (dash = nhead, trt = nhead; dash != NULL && dash->next != NULL;
	   prt = trt, trt = trt->next)
	dash = dash->next->next;
      if (dash != NULL)
	{
	  cut = trt;
	  trt = trt->next;
	}
      prt->next = NULL;
      half = trt;
      T1 = reverse_listint(&half);
      for (T2 = *head; T2; T1 = T1->next, T2 = T2->next)
	{
	  if (T2->n != T1->n)
	    return (0);
	}
      if (cut == NULL)
	prt->next = half;
      else
	{
	  prt->next = cut;
	  cut->next = half;
	}
    }

  return (1);
}

/**
 * reverse_listint - Writing a fxn that reverses a linked list in place
 * @head: Pointer to a pointer pointing to the first item in the list
 *
 * Return: The new head of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
  listint_t *next = NULL, *prev = NULL;

  if (!head || !*head)
    return (NULL);

  while ((*head)->next)
    {
      next = (*head)->next;

      (*head)->next = prev;

      prev = *head;

      *head = next;
    }

  (*head)->next = prev;

  return (*head);
}
