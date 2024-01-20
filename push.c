#include "monty.h"

void push(stack_t **stack, unsigned int line_number, char **av)
{
	stack_t *new_node;

	if (top == LIMIT)
	{
		fprintf(stderr, "Error: Stack overflow\n");
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(av[1]);
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
	top++;
}
