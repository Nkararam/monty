#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
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
 * for stack, queues
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct monty_s - global variable for monty interpreter
 * @line_num: line number of byte code file
 * @arg: opcode argument
 * @stack: stack
*/
typedef struct monty_s
{
unsigned int ln;
char *arg;
stack_t *stack;
} monty_t;
extern monty_t monty;

/* in monty.c */
FILE *check_args(int argc, char **argv);
void (*get_ops(char *opcode))(stack_t **stack, unsigned int ln);
void init_monty(void);

/* in util.c */
int _isdigit(char *str);

void free_stack(stack_t *stack);
void push(stack_t **stack, unsigned int ln);
void pall(stack_t **stack, unsigned int ln);
void pint(stack_t **stack, unsigned int ln);
void pop(stack_t **stack, unsigned int ln);
void swap(stack_t **stack, unsigned int ln);
void add(stack_t **stack, unsigned int ln);
void nop(stack_t **stack, unsigned int ln);
void sub(stack_t **stack, unsigned int ln);
void divide(stack_t **stack, unsigned int ln);
void mul(stack_t **stack, unsigned int ln);
void mod(stack_t **stack, unsigned int ln);
void pchar(stack_t **stack, unsigned int ln);
void pstr(stack_t **stack, unsigned int ln);
void rotl(stack_t **stack);
void rotr(stack_t **stack);
void addnode(stack_t **stack, int n);
void addqueue(stack_t **stack, int n);

#endif /* MONTY_H */
