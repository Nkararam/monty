#include "monty.h"
/**
 * pint - prints element at the top of a list
 * @stack: double pointer to head node of list
 * @ln: line number of bytecode file
*/
void pint(stack_t **stack, unsigned int ln)
{
if (!(*stack))
{
dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", ln);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
