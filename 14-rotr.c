#include "monty.h"

/**
 * rotr_stack - rotates the stack to the bottom
 * @head: double pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void rotr_stack(stack_t **head, __attribute__((unused)) unsigned int lcount)
{
	stack_t *dup;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;
}
