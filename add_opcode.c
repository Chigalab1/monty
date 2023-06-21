#include "monty.h"

/**
 * add_2h -function that adds the top two elements of a stack
 *
 * @head: pointer to the stack head
 * @lcount: Number of elements in the stack
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




/**
 * add_node - a function that add node to the head of stack
 *
 * @head: pointer to head of the stack
 * @n: element in new node to be added
 */

void add_node(stack_t **head, int n)
{

	stack_t *new_node; /* pointer to new node */
	stack_t *curr_node; /* maintain a reference to the current top node */

	curr_node = *head;
	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{ printf("Error\n");
		exit(0); }

	if (curr_node)
	{
		curr_node->prev = new_node;
	}

	new_node->n = n;

	new_node->next = *head;

	new_node->prev = NULL;

	*head = new_node;
}

