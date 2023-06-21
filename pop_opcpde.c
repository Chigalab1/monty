#include "monty.h"

/**
 * _pop - funtion that remoes the top element from a stack
 *
 * @head: poonter to the head of the stack
 * @lcount: number of lines in stack
 */

void _pop(stack_t **head, unsigned int lcount)
{
	stack_t *tmp_node; /* Pointer to traverse the stack */

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}

	tmp_node = *head;
	*head = tmp_node->next;
	free(tmp_node);
}

