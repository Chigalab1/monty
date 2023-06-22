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
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}

