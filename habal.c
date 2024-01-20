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
	char *delim = " \n", *token;
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
			get_command(buffer, argv);
			printf("buffer is %s\n", buffer);

			for (i = 0; i < sizeof(sps) / sizeof(sps[0]); i++)
			{
				if (strcmp(buffer, sps[i].opcode) == 0)
				{
					sps[i].f;
					printf("here it is\n");
					break;
				}
			}
		}
		fclose(file);
	}
	return (0);
}
