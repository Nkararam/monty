#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to head node of list
 * @ln: line number of bytecode file
*/
void swap(stack_t **stack, unsigned int ln)
{
stack_t *temp;
if (!(*stack) || !(*stack)->next)
{
dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", ln);
exit(EXIT_FAILURE);
}
temp = (*stack)->next;
if (temp->next)
{
(*stack)->next = temp->next;
temp->next->prev = *stack;
}
else
(*stack)->next = NULL;
(*stack)->prev = temp;
temp->next = *stack;
temp->prev = NULL;
*stack = temp;
}
