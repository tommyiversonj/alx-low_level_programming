#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *h;

h = *head;

if (idx != 0)
{
for (i = 0; i < idx - 1 && h != NULL; i++)
{
h = h->next;
}
}

if (h == NULL && idx != 0)
return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
}
else
{
new->next = h->next;
h->next = new;
}

return (new);
}
