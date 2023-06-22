#include "monty.h"

/**
 * mul - multiplies the top two elements of stack
 * @head: double pointer to the head of the stack
 * @counter: line number of the opcode
 * Return: void
 */
void mul(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int l = 0, result;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		l++;
	}

	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	result = temp->next->n * temp->n;
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}
