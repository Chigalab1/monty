#include "monty.h"

/**
 * free_all_nodes - frees a dobly linked list
 * @head: pointer to the head of the stack
 * Return: void
 */
void free_all_nodes(stack_t *head)
{
	stack_t *res;

	res = head;
	while (head != NULL)
	{
		res = head->next;
		free(head);
		head = res;
	}
}
