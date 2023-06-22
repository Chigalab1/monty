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


