#include "monty.h"
/**
 * stack_mode - Sets the current mode to stack (LIFO).
 * @stack: A pointer to the pointer to the head of the stack (not used).
 *
 * This function sets the current mode to stack (LIFO).
 * It serves as a placeholder
 * for a mode-setting operation in the interpreter.
 * The stack pointer parameter is
 * not used in this operation.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void stack_mode(stack_t **stack)
{
	(void)stack;
	current_mode(0);
}
/**
 * queue_mode - Sets the current mode to queue (FIFO).
 * @stack: A pointer to the pointer to the head of the stack (not used).
 *
 * This function sets the current mode to queue (FIFO).
 * It serves as a placeholder
 * for a mode-setting operation in the interpreter.
 * The stack pointer parameter is
 * not used in this operation.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void queue_mode(stack_t **stack)
{
	(void)stack;
	current_mode(1);
}

/**
 * dlistint_len -the size of doubly linked list
 * @h: the head node pointer
 * Return: size of the linked list
 */
size_t dlistint_len(const stack_t *h)
{
	return (h ? dlistint_len(h->next) + 1 : 0);
}

/**
 * delete_dnodeint_at_index - delete node at the specific index
 * @head: the head for the linked list
 * @index: the index of the node to delete
 * Return: 1 if deleted or -1 if there an error
 * Ashraf-Atef1 && AhMeDMaGDY28
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *delNode = get_dnodeint_at_index(*head, index);

	if (delNode)
		if (!index)
			if (delNode->next)
				*head = delNode->next, delNode->next->prev = NULL;
			else
				*head = delNode->next;
		else
		{

			if (delNode->next)
				delNode->prev->next = delNode->next, delNode->next->prev = delNode->prev;
			else
				delNode->prev->next = delNode->next;
		}
	else
		return (-1);
	free(delNode);
	return (1);
}
