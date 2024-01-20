#include "monty.h"
/**
 * pop - removes top element
 * @stack: stack
 * @line_number: line number
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL)
	{
		printf("STACK IS EMPTY");
	}
	current = *stack;
	*stack = current->next;
	if (*stack)
	{
		(*stack)->prev = NULL;
	}

	current->next = NULL;
	current->prev = NULL;
	free(current);
}
