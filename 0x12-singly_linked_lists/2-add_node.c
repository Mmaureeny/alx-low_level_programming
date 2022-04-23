#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* add_node - function that prints all the elements of a list_t list
* @head: input header pointer
* @str: Input string value
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
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
newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;

return (newNode);
}

