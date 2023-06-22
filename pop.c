#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: double pointer to head node of list
 * @ln: line number of bytecode file
*/
void pop(stack_t **stack, unsigned int ln)
{
stack_t *temp;
if (!(*stack))
{
dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", ln);
exit(EXIT_FAILURE);
}
temp = *stack;
if (!(*stack)->next)
*stack = NULL;
else
*stack = (*stack)->next, (*stack)->prev = NULL;
free(temp);
}
