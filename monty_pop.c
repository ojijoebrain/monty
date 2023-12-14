#include "monty.h"
/**
 * monty_pop - Prints and remove the top element of the stack
 * @head: Stack head
 * @counter: line_num
 * Return: no return
*/
void monty_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(stream.file);
		free(stream.content);
		free_sq(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
