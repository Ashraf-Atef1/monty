#include "monty.h"

/**
 * print_dlistint - print doubly linked list node
 * @h: the head node pointer
 * Return: size of the linked list
 * Ashraf-Atef1 && AhMeDMaGDY28
 */
size_t print_dlistint(const stack_t *h)
{
	int size = 0;

	for (; h; size++, h = h->next)
		printf("%d\n", h->n);
	return (size);
}

/**
 * add_dnodeint - add a new node to the linked list at the start
 * @head: the head node pointer
 * @n: the value of the new node
 * Return: a pointer the new node
 * Ashraf-Atef1 && AhMeDMaGDY28
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (head && *head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}

/**
 * add_dnodeint_end - add a new node to the linked list at the end
 * @head: the head node pointer
 * @n: the value of the new node
 * Return: a pointer the new node
 * Ashraf-Atef1 && AhMeDMaGDY28
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *tail = NULL, *newNode = malloc(sizeof(stack_t)),
		   *c_head = NULL;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (head && *head)
		c_head = *head;
	while (c_head)
		tail = c_head,
	c_head = c_head->next;
	if (tail)
		tail->next = newNode;
	else
		*head = newNode;
	newNode->prev = tail;
	return (newNode);
}

/**
 * free_dlistint - free a doubly linked list
 * @head: the head node pointer
 * Ashraf-Atef1 && AhMeDMaGDY28
 */
void free_dlistint(stack_t *head)
{
	stack_t *h = head;

	while (h)
	{
		stack_t *temp = h;

		h = h->next;
		free(temp);
		if (!h)
			break;
	}
}

/**
 * get_dnodeint_at_index - get node at specific index
 * @head: the head node pointer
 * @index: the index of the node to get
 * Return: the required node or Null if the node didn't exsist
 * Ashraf-Atef1 && AhMeDMaGDY28
 */
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i++ < index)
		if (head)
			head = head->next;
		else
			return (head);
	return (head);
}
