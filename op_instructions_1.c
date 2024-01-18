#include "monty.h"
/**
 * push_op - Pushes an integer onto the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function parses the next token as an integer
 * and pushes it onto the stack.
 * It performs error checking on the input and
 * provides appropriate error messages.
 * The decision to add to the beginning or
 * end of the stack is based on the global variable _mod.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void push_op(stack_t **stack)
{
	char *n = strtok(NULL, " \t\n");
	int i = 0;

	if (!n || !*n)
		fprintf(stderr, "L%d: usage: push integer\n", c_Line), _exit;
	if (n[i] == '-')
		i++;
	while (n[i])
		if (n[i] < '0' || n[i++] > '9')
			fprintf(stderr, "L%d: usage: push integer\n", c_Line), _exit;
	if (_mod == 0)
		add_dnodeint(stack, atoi(n));
	else
		add_dnodeint_end(stack, atoi(n));
}
/**
 * pall_op - Prints all the elements of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function prints all the elements of the
 * stack using the print_dlistint function.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void pall_op(stack_t **stack)
{
	print_dlistint(*stack);
}
/**
 * pint_op - Prints the value at the top of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function prints the value at the
 * top of the stack. If the stack is empty,
 * it provides an error message and exits with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void pint_op(stack_t **stack)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
		fprintf(stderr, "L%d: can't pint, stack empty\n", c_Line), _exit;
}
/**
 * pop_op - Removes the top element of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function removes the top element of the stack. If the stack is empty,
 * it provides an error message and exits with an error status. The decision to
 * remove from the beginning or end of the stack is
 * based on the global variable _mod.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void pop_op(stack_t **stack)
{
	if (!*stack)
		fprintf(stderr, "L%d: can't pop an empty stack\n", c_Line), _exit;

	if (_mod == 0)
		delete_dnodeint_at_index(stack, 0);
	else
		delete_dnodeint_at_index(stack, dlistint_len(*stack) - 1);
}
/**
 * swap_op - Swaps the top two elements of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function swaps the values of the top two elements of the stack. If the
 * stack has fewer than two elements, it provides an error message and exits
 * with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void swap_op(stack_t **stack)
{
	if (dlistint_len(*stack) >= 2)
	{
		int temp = (*stack)->n;

		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
		fprintf(stderr, "L%d: can't swap, stack too short\n", c_Line), _exit;
}
