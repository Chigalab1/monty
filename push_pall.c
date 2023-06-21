#include "monty.h"

/**
 * push_node - a function that adds node to the stack
 *
 * @head: the head of stack
 * @lcount: number of lines in stack
 */

void push_node(stack_t **head, unsigned int lcount)
{
	int data, i = 0, flag = 0;

	if (context.arg)
	{
		i += (context.arg[0] == '-');

		while (context.arg[i] != '\0')
		{
			if (context.arg[i] > 57 || context.arg[i] < 48)
			{
				flag = 1;
			}
			i++;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", lcount);
			fclose(context.file);
			free(context.content);
			free_all_nodes(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", lcount);
		fclose(context.file);
		free(context.content);
		free_all_nodes(*head);
		exit(EXIT_FAILURE);
	}

	data = atoi(context.arg);
	if (context.lifi == 0)
		add_node(head, data);
	else
		addqueue(head, data);
}



/**
 * pall - function that prints all elements of a stack
 *
 * @head: pointer to first node
 * @lcount: Number of elements in the stack
 */

void pall(stack_t **head, unsigned int lcount)
{
        stack_t *tmp_node;
        (void)lcount;

        tmp_node = *head;
        if (tmp_node == NULL)
                return;

        while (tmp_node)
        {
                printf("%d\n", tmp_node->n);
                tmp_node = tmp_node->next;
        }
}
