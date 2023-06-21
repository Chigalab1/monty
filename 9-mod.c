#include "monty.h"

/**
 * mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack.
 * @head: double pointer to the head of stack
 * @lcount: line number
 * Return: void
 */
void mod(stack_t **head, unsigned int lcount)
{
	stack_t *temp;
	int l = 0, result;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}

