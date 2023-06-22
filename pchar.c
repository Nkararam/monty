#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack: pointer to lists for monty stack
 * @ln: number of line opcode occurs on
*/
void pchar(stack_t **stack, unsigned int ln)
{
stack_t *temp;
temp = *stack;
if (!temp)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", ln);
exit(EXIT_FAILURE);
}
if (temp->n > 127 || temp->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", ln);
exit(EXIT_FAILURE);
}
printf("%c\n", temp->n);
}
