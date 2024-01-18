#include "main.h"
void display(stack_t **stack, unsigned int line_number)
{
	int i;

	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else if (top > 0)
	{
		printf("The elements of the stack are:\n");
		for (i = top; i >= 0; i--)
		{
		}
	}
}