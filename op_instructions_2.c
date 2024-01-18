#include "monty.h"
/**
 * add_op - Adds the top two elements of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function adds the values of the top two elements of the stack. If the
 * stack has fewer than two elements, it provides an error message and exits
 * with an error status. The result replaces the top element, and the second
 * element is removed from the stack.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void add_op(stack_t **stack)
{
	if (dlistint_len(*stack) >= 2)
	{
		(*stack)->next->n += (*stack)->n;
		delete_dnodeint_at_index(stack, 0);
	}
	else
		fprintf(stderr, "L%d: can't add, stack too short\n", c_Line), _exit;
}
/**
 * nop_op - Does nothing with the stack.
 * @stack: A pointer to the pointer to the head of the stack (not used).
 *
 * This function does nothing with the stack. It serves as a placeholder for
 * a stack operation that doesn't modify the stack.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void nop_op(stack_t **stack)
{
	(void)(stack);
}
/**
 * sub_op - Subtracts the top element from the second element of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function subtracts the value of the top element from the second element
 * of the stack. If the stack has fewer than two elements, it provides an error
 * message and exits with an error status. The result replaces the top element,
 * and the second element is removed from the stack.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void sub_op(stack_t **stack)
{
	if (dlistint_len(*stack) >= 2)
	{
		(*stack)->next->n -= (*stack)->n;
		delete_dnodeint_at_index(stack, 0);
	}
	else
		fprintf(stderr, "L%d: can't sub, stack too short\n", c_Line), _exit;
}
/**
 * div_op - Divides the second element by the top element of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function divides the value of the second element by the top element
 * of the stack. If the top element is zero, it provides an error message and
 * exits with an error status. The result replaces the top element, and the
 * second element is removed from the stack. If the stack has fewer than two
 * elements, it provides an error message and exits with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void div_op(stack_t **stack)
{
	if (dlistint_len(*stack) >= 2)
	{
		if (!(*stack)->n)
			fprintf(stderr, "L%d: division by zero\n", c_Line), _exit;
		(*stack)->next->n /= (*stack)->n;
		delete_dnodeint_at_index(stack, 0);
	}
	else
		fprintf(stderr, "L%d: can't div, stack too short\n", c_Line), _exit;
}
/**
 * multi_op - Multiplies the top two elements of the stack.
 * @stack: A pointer to the pointer to the head of the stack.
 *
 * This function multiplies the values of the top two elements of the stack.
 * The result replaces the top element, and the second element is removed
 * from the stack. If the stack has fewer than two elements, it provides an
 * error message and exits with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void multi_op(stack_t **stack)
{
	if (dlistint_len(*stack) >= 2)
	{
		(*stack)->next->n *= (*stack)->n;
		delete_dnodeint_at_index(stack, 0);
	}
	else
		fprintf(stderr, "L%d: can't mul, stack too short\n", c_Line), _exit;
}
