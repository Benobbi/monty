#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: head of stack
 * @counter: number of lines read
 * Return: NULL
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

