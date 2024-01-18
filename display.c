#include "main.h"
void display(void)
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
			printf("%d\n", stack[i]);
		}
	}
}