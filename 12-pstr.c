#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @head: double pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void pstr(stack_t **head, unsigned int lcount)
{
	stack_t *temp;
	(void)lcount;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
