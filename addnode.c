#include "monty.h"
/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @stack: head of the stack
*/
void addqueue(stack_t **stack, int n)
{
stack_t *new_node, *temp;
temp = *stack;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (temp)
{
while (temp->next)
temp = temp->next;
}
if (!temp)
{
*stack = new_node;
new_node->prev = NULL;
}
else
{
temp->next = new_node;
new_node->prev = temp;
}
}
