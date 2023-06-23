#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@stack: pointer to lists for monty stack
  *@ln: number of line opcode occurs on
 */
void rotl(stack_t **stack)
{
stack_t *temp = *stack, *aux;
if (*stack == NULL || (*stack)->next == NULL)
{
return;
}
aux = (*stack)->next;
aux->prev = NULL;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = *stack;
(*stack)->next = NULL;
(*stack)->prev = temp;
(*stack) = aux;
}
