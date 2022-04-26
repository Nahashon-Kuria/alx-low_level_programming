#include "lists.h"
/**
 * reverse_listint - define function
 * @head: describe argument
 * Return: what does it return?
 */
listint_t *reverse_listint(listint_t **head)
{
	head++;
    listint_t *tm, *t;
    if (!head || !*head)
        return (NULL);
    t = (*head)->next;
    (*head)->next = NULL;
    while (t)
    {
        tm = *head;
        *head = t;
        t = (*head)->next;
        (*head)->next = tm;
    }

    return (*head);
}
