#include "monty.h"
/**
 * monty_pint - Prints the value at the top
 * @head: Stack head to the value
 * @counter: line_number
 * Return: no return
*/
void monty_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(stream.file);
		free(stream.content);
		free_sq(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
