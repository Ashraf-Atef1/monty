#include "monty.h"
/**
 * mod_op - Computes the modulus of the second element
 * by the top element of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function computes the modulus of the value of
 * the second element by the top
 * element of the stack. If the top element is zero,
 * it provides an error message and
 * exits with an error status.
 * The result replaces the top element, and the second
 * element is removed from the stack. If the stack has fewer than two elements,
 * it provides an error message and exits with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void mod_op(stack_t **stack)
{
	if (dlistint_len(*stack) >= 2)
	{
		if (!(*stack)->n)
			fprintf(stderr, "L%d: division by zero\n", c_Line), _exit;
		(*stack)->next->n %= (*stack)->n;
		delete_dnodeint_at_index(stack, 0);
	}
	else
		fprintf(stderr, "L%d: can't mod, stack too short\n", c_Line), _exit;
}
/**
 * pchar_op - Prints the ASCII character corresponding
 * to the top element of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function prints the ASCII character corresponding
 * to the value of the top element
 * of the stack. If the value is out of the valid ASCII range,
 * it provides an error message
 * and exits with an error status. If the stack is empty,
 * it provides an error message
 * and exits with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void pchar_op(stack_t **stack)
{
	if (*stack)
	{
		if ((*stack)->n >= 0 && (*stack)->n < 128)
			printf("%c\n", (*stack)->n);
		else
			fprintf(stderr, "L%d: can't pchar, value out of range\n", c_Line), _exit;
	}
	else
		fprintf(stderr, "L%d: can't pchar, stack empty\n", c_Line), _exit;
}
/**
 * pstr_op - Prints the string represented by the stack's ASCII values.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function prints the string represented
 * by the ASCII values of the stack's elements.
 * It continues printing characters until
 * it encounters a non-positive value or one outside
 * the valid ASCII range.
 * The printed characters are sent to the standard output.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void pstr_op(stack_t **stack)
{
	stack_t *h;

	for (h = *stack; h && h->n > 0 && h->n < 128; h = h->next)
		putc(h->n, stdout);
	putc('\n', stdout);
}
/**
 * rotl_op - Rotates the stack to the left.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function rotates the stack to the left by moving the top element to
 * the bottom. The value that was at the top becomes the new bottom element.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void rotl_op(stack_t **stack)
{
	stack_t *h = *stack;
	int temp;

	if (h)
		temp = h->n;
	for (; h; h = h->next)
		if (h->next)
			h->n = h->next->n;
		else
			h->n = temp;
}
/**
 * rotr_op - Rotates the stack to the right.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function rotates the stack to the right by moving the bottom element to
 * the top. The value that was at the bottom becomes the new top element.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void rotr_op(stack_t **stack)
{
	stack_t *h = *stack;
	int temp;

	for (; h; h = h->next)
	{
		if (h->prev)
		{
			int old_n = h->n;

			h->n = temp;
			temp = old_n;
		}
		else
			temp = h->n;
	}

	if (*stack)
		(*stack)->n = temp;
}
