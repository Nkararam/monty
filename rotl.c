#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@stack: pointer to stack
 */
void rotl(stack_t **stack)
{
stack_t *temp = *stack;
if (*stack == NULL || (*stack)->next == NULL)
{
return;
}
temp = (*stack)->next;
temp->prev = NULL;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = *stack;
(*stack)->next = NULL;
(*stack)->prev = temp;
(*stack) = temp;
}
