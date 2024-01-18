#include "main.h"
void pop(void)
{
	int element;

	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		element = stack[top];
		printf("The deleted item is %d\n", stack[top]);
		top--;
	}
}
