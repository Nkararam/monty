#include "monty.h"
/**
  *sub- sustration
  *@stack:pointer to lists for monty stack
  *@ln: line_number
 */
void sub(stack_t **stack, unsigned int ln)
{
stack_t *temp;
int sus, nodes;
temp = *stack;
for (nodes = 0; temp != NULL; nodes++)
temp = temp->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", ln);
exit(EXIT_FAILURE);
}
temp = *stack;
sus = temp->next->n - temp->n;
temp->next->n = sus;
*stack = temp->next;
free(temp);
}
