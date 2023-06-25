#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @ln: line_number
* @file: poiner to monty file
*/
void execute(stack_t **stack, unsigned int ln)
{
	instruction_t opst[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"div", div},
				{"mul", mul},
				{"mod", mod},
				{"pchar", pchar},
				{"pstr", pstr},
				{"rotl", rotl},
				{"rotr", rotr},
				{"queue", queue},
				{"stack", stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(temp, " \n\t");
	if (op && op[0] == '#')
		return (0);
	monty.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, ln);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", temp, op);
		free(temp);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
