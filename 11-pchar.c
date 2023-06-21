#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @head: double pointer to the stackm head
 * @lcount: line number
 * Return: void
 */
void pchar(stack_t **head, unsigned int lcount)
{
	stack_t *temp;

	temp = *head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
