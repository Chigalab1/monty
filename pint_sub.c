#include "monty.h"

/**
 * _pint - a function that prints the value at the top of the stack.
 *
 * @head: A pointer to the head of the stack
 * @lcount: The line number for error reporting
*/

void _pint(stack_t **head, unsigned int lcount)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}



/**
  *_sub- a function that does sustration at the head
  *
  *@head: A pointer to the head of the stack
  *@lcount: number of lines in stack
 */

void _sub(stack_t **head, unsigned int lcount)
{
	stack_t *tmp_node;
	int diff;
	int node_count;

	tmp_node = *head;

	for (node_count = 0; tmp_node != NULL; node_count++)
	{
		tmp_node = tmp_node->next;
	}

	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}

	tmp_node = *head;

	diff = tmp_node->next->n - tmp_node->n;

	tmp_node->next->n = diff;

	*head = tmp_node->next;

	free(tmp_node);
}

