#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/**
 *f_push - adds a node to the stack
 *@head: stack head
 *@line_count: number of lines
 *Return: NULL
 */

typedef struct
{
	int stack[STACK_SIZE];
	int top;
} Stack;

Stack stack = {.top = -1};

void f_push(stack_t **head, unsigned int line_count)
{
	if (stack.top == STACK_SIZE - 1)
	{
		fprintf(stderr, "Stack overflow: Push operation failed\n");
		exit(EXIT_FAILURE);
	}
	stack.stack[++stack.top] = value;
}

/**
 * f_pall - prints the stack
 * @head: stack head
 * @line_count: number of lines
 * Return: NULL
 */

void f_pall(stack_t **head, unsigned int line_count)
}
	for (int i = stack.top; i >= 0; i--)
	{
		printf("%d\n", stack.stack[i]);
	}
}

