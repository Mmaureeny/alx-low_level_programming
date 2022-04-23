#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list
* @head: input header pointer
* @str: Input string value
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;

if (str == NULL)
return (NULL);

newNode = (list_t *)malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
return (NULL);
}
newNode->len = strlen(newNode->str);
newNode->next = NULL;
if (*head == NULL)
*head = newNode;
else
{
list_t *lastNode = *head;

while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}
lastNode->next = newNode;
}
return (newNode);
}
