#include "monty.h"

/**
 * push_node - a function that adds node to the stack
 *
 * @head: the head of stack
 * @lcount: number of lines in stack
 */

void push_node(stack_t **head, unsigned int lcount)
{
	int data, i = 0, flag = 0;

	if (context.arg)
	{
		i += (context.arg[0] == '-')

		while (context.arg[i] != '\0')
		{
			if (context.arg[i] > 57 || context.arg[i] < 48)
			{
				flag = 1;
			}
			i++;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", lcount);
			fclose(context.file);
			free(context.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", lcount);
		fclose(context.file);
		free(context.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(context.arg);
	if (context.lifi == 0)
		addnode(head, data);
	else
		addqueue(head, data);
}
