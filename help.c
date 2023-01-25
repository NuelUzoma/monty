#include "monty.h"
/**
 * _isdigit - Checks for a digit 0 to 9
 * Return: 0 or 1
 * @c: variable
 **/
int _isdigit(char *c)
{
	char *aux = c;

	if (c == NULL)
		return (0);
	if (*aux == '-')
		aux++;

	for (; *aux != '\0'; aux++)
	{
		if ((*aux < '0' || *aux > '9'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * cleanStack - Frees mallocs and close the files
 * @stack: Stack
 */
void cleanStack(stack_t **stack)
{
	stack_t *current = *stack;

	for (; current; current = *stack)
	{
		*stack = (*stack)->next;
		free(current);
	}
	fclose(global.fd);
	free(global.line);
}
