#include "monty.h"
/**
  *rotr- rotates the stack to the bottom
 * @stack: pointer to lists for monty stack
 * @ln: number of line opcode occurs on
 */
void rotr(stack_t **stack, unsigned int ln)
{
stack_t *temp;
temp = *stack;
if (*stack == NULL || (*stack)->next == NULL)
{
return;
}
while (temp->next)
{
temp = temp->next;
}
temp->next = *stack;
temp->prev->next = NULL;
temp->prev = NULL;
(*stack)->prev = temp;
(*stack) = temp;
}
