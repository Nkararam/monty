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
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int ln);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push(stack_t **stack, unsigned int ln);
void pall(stack_t **stack, unsigned int ln);
void pint(stack_t **stack, unsigned int ln);
int execute(char *content, stack_t **stack, unsigned int ln, FILE *file);
void free_stack(stack_t *stack);
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
void rotl(stack_t **stack, unsigned int ln);
void rotr(stack_t **stack,  unsigned int ln);
void addnode(stack_t **stack, int n);
void addqueue(stack_t **stack, int n);
void queue(stack_t **stack, unsigned int ln);
void stack(stack_t **stack, unsigned int ln);
#endif
