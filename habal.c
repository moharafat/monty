#include "main.h"
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
	int i, count = 0;
	instruction_t sps[] = {
		{"push", push}, {"pop", pop}, {"display", display}
};

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
			printf("%s", buffer);
			if (buffer == sps[i].opcode)
			{
				sps[i].f;
				break;
			}
		}
		fclose(file);
	}
	return (0);
}
