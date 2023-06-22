#include "monty.h"
/**
 * mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @stack: pointer to lists for monty stack
 * @ln: number of line opcode occurs on
*/
void mod(stack_t **stack, unsigned int ln)
{
stack_t *temp;
int len = 0, result;
temp = *stack;
while (temp)
{
temp = temp->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", ln);
exit(EXIT_FAILURE);
}
temp = *stack;
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", ln);
exit(EXIT_FAILURE);
}
result = temp->next->n % temp->n;
temp->next->n = result;
*stack = temp->next;
free(temp);
}
