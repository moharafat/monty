#include "main.h"
void push(void)
{
	int element;

	if (top == LIMIT - 1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("Enter the element to be inserted:");
		scanf("%d", &element);
		top++;
		stack[top] = element;
	}
}
