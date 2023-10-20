#include "monty.h"
#include <stdio.h>

/*bus_t bus = {NULL, NULL, NULL, 0};*/

/**
 * main - starting point of program
 * @argc: arguments
 * @argv: file path for monty
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned int counter = 0;
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line >= 1)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line >= 1)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
