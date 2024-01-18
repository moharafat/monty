#include "main.h"
/**
 * main - entry point
 * @argc: arguments num.
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *file;
	int i, count = 0;
	char buffer[50];
	instruction_t sps[] = {
		{'push', push}, {'pop', pop}, {'display', display}, {'exit', exit}
	}
	for (i = 0; i != NULL; i++)
	{
		if (s == sps[i].instruction_t)
		{
			count = count + sps[i].f(argv);
			break;
		}
		else if (i == 6 && != sps[i].instruction_t)
		{
			/* code */
		}
	}
	if (argc != 2)
	{
		fprintf(2, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], 'r');
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
		}
		fclose(file);
	}
	else
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	return (0);
}

