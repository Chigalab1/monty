#include "monty.h"
#include <stdio.h>

prog_data_t context = {NULL, NULL, NULL, 0};
/**
 * main - code interpreter
 * @argc: argument count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t r_line = 1;
	stack_t *stck = NULL;
	unsigned int lcount = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	context.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (r_line > 0)
	{
		content = NULL;
		r_line = getline(&content, &size, file);
		context.content = content;
		lcount++;
		if (r_line > 0)
		{
			exec_file(content, &stck, lcount, file);
		}
		free(content);
	}
	free_all_nodes(stck);
	fclose(file);
	return (0);
}
