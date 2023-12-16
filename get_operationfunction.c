#include "monty.h"

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 
 *
 * Return: function pointer corresponding to operator given

 *
int (*get_op_func(char *s))(int)

*/
void (*get_op_func(char *s))(stack_t**, unsigned int)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint}, /*Add new functions on here*/
		{NULL, NULL}
	};
	int e = 0;

	while (ops[e].opcode != NULL && strcmp((ops[e].opcode), s))
		e++;
	return (ops[e].f);
}
