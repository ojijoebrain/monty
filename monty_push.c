#include "monty.h"
/**
 * monty_push - Pushes the element to stack
 * @head: Head node
 * @num: line_num
*/
void monty_push(stack_t **head, unsigned int num)
{
	int n, j = 0, flag = 0;

	if (stream.arg)
	{
		if (stream.arg[0] == '-')
			j++;
		for (; stream.arg[j] != '\0'; j++)
		{
			if (stream.arg[j] > 57 || stream.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(stream.file);
			free(stream.content);
			free_sq(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(stream.file);
		free(stream.content);
		free_sq(*head);
		exit(EXIT_FAILURE); }
	n = atoi(stream.arg);
	if (stream.lifi == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
