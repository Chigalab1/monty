#include "monty.h"

/**
 * div -  divides the second top element of the stack by the top
 * element of the stack
 * @head: double pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void _div(stack_t **head, unsigned int lcount)
{
	stack_t *temp;
	int l = 0, res;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}
	res = temp->next->n /temp->n;
	temp->next->n = res;
	*head = temp->next;
	free(temp);
}
