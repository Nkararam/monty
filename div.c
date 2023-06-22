#include "monty.h"
#include <stdlib.h>
/**
 * divide- divides the top two elements of the stack.
 * @stack: pointer to lists for monty stack
 * @ln: number of line opcode occurs on
*/
void divide(stack_t **stack, unsigned int ln)
{
stack_t *temp;
int len = 0;

temp = *stack;
while (temp)
{
temp = temp->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", ln);
exit(EXIT_FAILURE);
}
temp = *stack;
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", ln);
exit(EXIT_FAILURE);
}
result = temp->next->n / temp->n;
temp->next->n = result;
*stack = temp->next;
free(temp);
}
