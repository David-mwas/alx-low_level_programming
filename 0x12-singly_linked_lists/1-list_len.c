#include "lists.h"

/**
* list_len - returns number of elements in a linked list
*
* @h: linked list
* Return: number of elements in h
*/
size_t list_len(const list_t *h)
{
if (h && h->next)
return (1 + list_len(h->next));
else if (h)
 (1);
return (0);
}
