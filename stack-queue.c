#include "monty.h"
/**
 * stack - implement the stack opcode
 * @head: pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void stack(stack_t **head, unsigned int lcount)
{
	(void)head;
	(void)lcount;
	context.lifi = 0;
}

/**
 * queue - implements the queue opcode
 * @head: double pointer to the head of the stack
 * @lcount: line number
 * Return: void
 */
void queue(stack_t **head, unsigned int lcount)
{
	(void)head;
	(void)lcount;
	context.lifi = 1;
}

/**
 * add_queue - add a node to the end of a stack
 * @n: new value to add
 * @head: double pointer to the head of the stack
 * Return: void
 */
void add_queue(stack_t **head, int n)
{
	stack_t *new_n, *res;

	res = *head;
	new_n = malloc(sizeof(stack_t));

	if (new_n == NULL)
	{
		printf("Error\n");
	}

