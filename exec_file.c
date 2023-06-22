#include "monty.h"
/**
 * exec_file - execute the opcodes
 * @stack: double pointer to the head of the list
 * @lcount: line counter
 * @file: pointer to the monty file
 * @content: content of the line
 * Return: void
 */
int exec_file(char *content, stack_t **stack, unsigned int lcount, FILE *file)
{
	instruction_t option[] = {
		{"push", push_node}, {"pall", _pall}, {"pint", _pint},
		{"pop", _pop}, {"swap", _swap}, {"add", add_2h},
		{"nop", _nop}, {"sub", _sub}, {"div", _div},
		{"mul", _mul}, {"mod", _mod}, {"pchar", _pchar},
		{"pstr", _pstr}, {"rotl", rotl_stack},
		{"rotr", rotr_stack}, {"queue", _queue},
		{"stack", _stack}, {NULL, NULL}
	};
	unsigned int j = 0;
	char *oop;

	oop = strtok(content, "\n\t");
	if 
