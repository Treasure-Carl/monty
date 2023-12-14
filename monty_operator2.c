#include "monty.h"

/**
* f_push - function that adds node to the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int t, n = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			n++;
		for (; bus.arg[n] != '\0'; n++)
		{
			if (bus.arg[n] > 57 || bus.arg[n] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	t = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, t);
	else
		addqueue(head, t);
}
