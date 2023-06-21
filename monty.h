#define MONTY_H


#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

extern prog_data_t context;


typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


typedef struct bus_s
{
        char *arg;
        FILE *file;
        char *content;
        int lifi;
}  prog_data_t;


void push_node(stack_t **head, unsigned int lcount);
void pall(stack_t **head, unsigned int lcount);
void mul(stack_t **head, unsigned int counter);
void free_all_nodes(stack_t *head);


