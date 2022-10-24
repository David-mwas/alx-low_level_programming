#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 *
 * @head: Parameter that point to de head of the
 * linked list
 * @str: Parameter with the string
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;

new = malloc(sizeof(list_t));
if (new == NULL)
{
 (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;

temp = *head;
if (*head == NULL)
{
= new;
}
else
{
(temp->next)
= temp->next;
ext = new;
}

return (new);
}
