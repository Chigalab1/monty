#include "monty.h"

/**
 * rotl_stack - rotates the stack to the top
 * @head: double pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void rotl_stack(stack_t **head,  __attribute__((unused)) unsigned int lcount)
{
	stack_t *temp = *head, *res;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	res = (*head)->next;
	res->prev = NULL;
	
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = res;
}

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
