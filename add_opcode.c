#include "monty.h"

/**
 * add_2h -function that adds the top two elements of a stack
 *
 * @head: pointer to the stack head
 * @lcount: line_number
*/

void add_2h(stack_t **head, unsigned int lcount)
{
	stack_t *tmp_node; /* Pointer to traverse the stack */
	int len; /* length of stack */
	int tmp_sum; /* temporary sum of nodes */

	len = 0;
	tmp_node = *head; /* Set tmp_node to the head of the stack */

	for (; tmp_node; tmp_node = tmp_node->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}

	tmp_node = *head;

	tmp_sum = tmp_node->n + tmp_node->next->n;

	tmp_node->next->n = tmp_sum;

	*head = tmp_node->next;

	free(tmp_node);
}
