#include "monty.h"
#include <ctype.h>

/**
 * push - adds an element to the stack
 * @stack: double pointer to head node of list
 * @ln: line number of bytecode file
*/
void push(stack_t **stack,unsigned int ln)
{
stack_t *new_node;
int data;

new_node = malloc(sizeof(size_t));
if (!new_node)
{
dprintf(STDERR_FILENO, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

if (!monty.arg || (isdigit(monty.arg) == -1))
{
dprintf(STDERR_FILENO, "L%u: usage: push integer\n", ln);
exit(EXIT_FAILURE);
}
data = atoi(monty.arg);
new_node->n = data;
new_node->next = NULL;
new_node->prev = NULL;

if (!(*stack))
{
(*stack) = new_node;
return;
}
new_node->next = (*stack);
(*stack)->prev = new_node;
(*stack) = new_node;
}
