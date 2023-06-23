#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @stack: pointer to lists for monty stack
 * @ln: number of line opcode occurs on
*/
void pstr(stack_t **stack, unsigned int ln)
{
stack_t *temp;
(void)ln;
temp = *stack;
while (temp)
{
if (temp->n > 127 || temp->n <= 0)
{
break;
}
printf("%c", temp->n);
temp = temp->next;
}
printf("\n");
}
