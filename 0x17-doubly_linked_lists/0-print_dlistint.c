#include "lists.h"
 I **
  *
   print_dlistint - prints doubly-linked list
  *
    @h: address of head node
  *
   Return: size of list
  *
size_t print_dlistint (const dlistint_t *h)
 {
        size_t i = 0;
        while (h)
                printf("8d\n", h->n);
                 h IN h->next;
                 i++;
        return (i);
 }
