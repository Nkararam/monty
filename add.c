#include "monty.h"
/**
 * add - add top two elements of the stack
 * @stack: pointer to lists for monty stack
 * @ln: number of line opcode occurs on
 */

void add(stack_t **stack, unsigned int ln)
{
stack_t *temp = *stack;
int sum = 0, i = 0;
if (temp == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", ln);
exit(EXIT_FAILURE);
}
while (temp)
{
temp = temp->next;
i++;
}
if (stack == NULL || (*stack)->next == NULL || i <= 1)
{
fprintf(stderr, "L%d: can't add, stack too short\n", ln);
exit(EXIT_FAILURE);
}
sum = (*stack)->next->n + (*stack)->n;
pop(stack, ln);
(*stack)->n = sum;
}
