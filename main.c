#include "monty.h"
/**
 * main - entry point
 * @argc: arguments num.
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char buffer[50];
	FILE *file;
	stack_t *head;
	char *delim = " \n";
	int i, k = 0, count = 0;
	instruction_t sps[] = {
		{"push", push}, {"pop", pop}, {"pall", pall}, {"pint", pop}};
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Error: Can't open file <file>");
		exit(EXIT_FAILURE);
	}
	if (file != NULL)
	{
		while (fgets(buffer, sizeof(buffer), file) != NULL)
		{
			token = strtok(buffer, delim);
				printf("1st token is %s\n", token);
			for (i = 0; i < sizeof(sps) / sizeof(sps[0]); i++)
			{
				if (strcmp(buffer, sps[i].opcode) == 0)
				{
					if (i == 0)
					{
						token = strtok(NULL, delim);
						sps[i].f(&head, 0);
						printf("2nd token is %s\n", token);
					}
					else
					{
						sps[i].f(&head, 0);
						printf("TOKEN IS NOT NUMBERS 100%% %s", token);
					}
					break;
				}
			}
		}
		fclose(file);
	}
	return (0);
}
