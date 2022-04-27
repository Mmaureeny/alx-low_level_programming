#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint - function that frees a linked list
*
* @head: first element
*
* Return: frees a list_t list
*/
void free_listint(listint_t *head)
{
if (head == NULL)
{
return;
}
free_listint(head->next);
free(head);
}

/**
* free_listint2 - function that frees a listint_t list.
* @head: header pointer
*/

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
{
return;
}

temp = *head;
*head = NULL;
free_listint(temp);
}
