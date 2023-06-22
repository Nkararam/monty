#include "monty.h"
/**
 * pall - prints all elements in a list
 * @stack: double pointer to head node of list
 * @ln: line number of bytecode file
*/
void pall(stack_t **stack, unsigned int ln)
{
stack_t *temp;
(void)ln;
temp = *stack;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
