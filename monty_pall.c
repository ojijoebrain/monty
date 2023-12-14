#include "monty.h"
/**
 * monty_pall - Prints all the values on stack
 * @head: Head node
 * @num: no good to use
*/
void monty_pall(stack_t **head, unsigned int num)
{
	stack_t *h;
	(void)num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
