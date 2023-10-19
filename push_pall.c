#include "monty.h"

/**
 *f_push - adds a node to the stack
 *@head: stack head
 *@line_count: number of lines
 *Return: NULL
 */

void f_push(stack_t **head, unsigned int line_count)
{
	int a, b = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] --'-')
			b++;
		for (; bus.arg[b] != '\0'; b++)
		{
			if (bus.arg[b] >= 58 || bus.arg[b] <= 47)
				flag = 1;
		}
		if (flag == 1)
		{
			fpritf(stderr, "L%d: usage: push integer\n", line_count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usgae: push integer\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

/**
 * f_pall - prints the stack
 * @head: stack head
 * @line_count: number of lines
 * Return: NULL
 */

void f_pall(stack_t **head, unsigned int line_count)
}
	stack_t *h;
	(void)line_count;

	h = *head;

	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

