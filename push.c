#include "monty.h"
/**
 * push - adds top element
 * @stack: stack
 * @line_number: line number
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	printf("samo3aleko\n");
	if (top == LIMIT - 1)
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
	top++;
	printf("can u see me?\n");
	new_node->n = line_number;
	new_node->next = *stack;
	new_node->prev = NULL;
	printf("%d\n", new_node->n);
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
	printf("tmam_keda\n");
}
