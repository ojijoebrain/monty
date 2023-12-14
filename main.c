#include "monty.h"
stream_t stream = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: num of argu
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	stream.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		stream.content = content;
		counter++;
		if (read_line > 0)
		{
			run(content, &stack, counter, file);
		}
		free(content);
	}
	free_sq(stack);
	fclose(file);
return (0);
}
