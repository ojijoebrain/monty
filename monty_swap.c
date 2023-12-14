#include "monty.h"
/**
 * monty_swap - Adds swap to the top two elements of the stack.
 * @head: Stack head
 * @counter: line_num
 * Return: no return
*/
void monty_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(stream.file);
		free(stream.content);
		free_sq(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
