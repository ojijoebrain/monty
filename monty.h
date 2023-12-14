#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct stream_s - variables -args, file, line content
 * @arg: pointer to arguments
 * @file: pointer to monty file stream
 * @content: content on each line
 * @lifi: flag change for struct_t
 */
typedef struct stream_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  stream_t;
extern stream_t stream;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void monty_push(stack_t **head, unsigned int num);
void monty_pall(stack_t **head, unsigned int num);
void monty_pint(stack_t **head, unsigned int number);
void monty_pop(stack_t **head, unsigned int counter);
void monty_swap(stack_t **head, unsigned int counter);
void monty_add(stack_t **head, unsigned int counter);
void monty_nop(stack_t **head, unsigned int counter);
void free_sq(stack_t *head);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int val);
int run(char *content, stack_t **head, unsigned int counter, FILE *file);
#endif
