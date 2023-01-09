#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

#define LIMIT 100
/**
 * push - adds an element to the stack
 * Return: 0 Success
 */
void push()
{
	int element, top, stack[LIMIT];

	if (stack[LIMIT] != int || push[LIMIT] == NULL)
	{
		printf("L<line_number>: usage: push integer\n");
		exit(98);
	}
	else if (top == LIMIT - 1)
	{
		printf("\nStack Overflow");
	}
	else
	{
		stack[++top] = element;
	}
}
