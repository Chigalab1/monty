#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>

#define READ_BUF_SIZE 1024
#define _GNU_SOURCE

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct program_data - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */

typedef struct program_data
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} prog_data_t;

extern prog_data_t context;

/*#define INIT_CONTEXT() \
	prog_data_t context = {NULL, NULL, NULL, 0} __attribute__((__unused__))*/

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



void push_node(stack_t **head, unsigned int lcount);
void _pall(stack_t **head, unsigned int lcount);
void _mul(stack_t **head, unsigned int counter);
void free_all_nodes(stack_t *head);
void _mod(stack_t **head, unsigned int lcount);
void _pchar(stack_t **head, unsigned int lcount);
void add_2h(stack_t **head, unsigned int lcount);
void _pstr(stack_t **head, unsigned int lcount);
void add_node(stack_t **head, int n);
void rotl_stack(stack_t **head, __attribute__((unused)) unsigned int lcount);
void rotr_stack(stack_t **head, __attribute__((unused)) unsigned int lcount);
void _pop(stack_t **head, unsigned int lcount);
void _div(stack_t **head, unsigned int lcount);
void _nop(stack_t **head, unsigned int lcount);
void _stack(stack_t **head, unsigned int lcount);
void _queue(stack_t **head, unsigned int lcount);
void add_queue(stack_t **head, int n);
int exec_file(char *content, stack_t **stack, unsigned int lcount, FILE *file);
void _swap(stack_t **head, unsigned int lcount);
void _pint(stack_t **head, unsigned int lcount);
void _sub(stack_t **head, unsigned int lcount);



#endif
