#ifndef MONTY_H
#define MONTY_H


#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>


typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


typedef struct program_data
{
        char *arg;
        FILE *file;
        char *content;
        int lifi;
}  prog_data_t;

extern prog_data_t context;

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



void push_node(stack_t **head, unsigned int lcount);
void pall(stack_t **head, unsigned int lcount);
void mul(stack_t **head, unsigned int counter);
void free_all_nodes(stack_t *head);
void mod(stack_t **head, unsigned int lcount);
void pchar(stack_t **head, unsigned int lcount);
void add_2h(stack_t **head, unsigned int lcount);
void pstr(stack_t **head, unsigned int lcount);
void add_node(stack_t **head, int n);
void rotl_stack(stack_t **head, __attribute__((unused)) unsigned int lcount);
void rotr_stack(stack_t **head, __attribute__((unused)) unsigned int lcount);
void _pop(stack_t **head, unsigned int lcount);






#endif



