#include "monty.h"
/**
 * _pall - prints all elements in the list
 * @stack: double pointer to the head node of linked list
 * @line_number: number of line opcode occurs on
*/
void _pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
(void) line_number;
temp = *stack;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
