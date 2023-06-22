#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @head: double pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void _swap(stack_t **head, unsigned int lcount)
{
	stack_t *temp;
	int l = 0;
	int res;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	res = temp->n;
	temp->n = temp->next->n;
	temp->next->n = res;
}
