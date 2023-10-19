#include "monty.h"

thread_t thread = {NULL, NULL, NULL, NULL, 0};

/**
 * main - starting point of program
 * @argc: arguments
 * @argv: file path for monty
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned int line_count = 0;
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t lines_read = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	thread.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n");
		exit(EXIT_FAILURE);
	}
	while (lines_read >= 1)
	{
		content = NULL;
		lines_read = getline(&content, &size, file);
		thread.content = content;
		line_count++;
		if (lines_read >= 1)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}

