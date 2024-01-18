#include "monty.h"
/**
 * main - Monty interpreter entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * This is the main function for the Monty interpreter. It reads and interprets
 * Monty bytecode from a file and executes the corresponding commands.
 *
 * Return: 0 on success, EXIT_FAILURE on failure.
 *
 * Authors:  Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int main(int argc, char const *argv[])
{
	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	else
	{
		char line[buffer_size];
		size_t num_line = 0;
		char *command;
		FILE *fp = fopen(argv[1], "r");
		stack_t *stack = NULL;

		if (fp == NULL)
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);

		handle_exit((void *)&stack, 1);
		while (fgets(line, sizeof(line), fp) != NULL)
		{
			get_line_number(++num_line);
			command = strtok(line, " \t\n");
			if (command && command[0] != '#')
				run_monty(&stack, command);
		}
		fclose(fp);
		free_dlistint(stack);
	}
	return (0);
}
/**
 * run_monty - Executes a Monty bytecode command.
 * @stack: A pointer to the pointer to the head of the stack.
 * @command: The Monty bytecode command to be executed.
 *
 * This function searches for the provided Monty bytecode command in an array
 * of instructions and executes the corresponding function. If the command is
 * not found, it provides an error message and exits with an error status.
 *
 * Return: No return value.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void run_monty(stack_t **stack, char *command)
{
	int i, idx = 0;
	instruction_t instructions[] = {{"push", push_op},
							  {"pall", pall_op},
							  {"pint", pint_op},
							  {"pop", pop_op},
							  {"swap", swap_op},
							  {"add", add_op},
							  {"nop", nop_op},
							  {"sub", sub_op},
							  {"div", div_op},
							  {"mul", multi_op},
							  {"mod", mod_op},
							  {"pchar", pchar_op},
							  {"pstr", pstr_op},
							  {"rotl", rotl_op},
							  {"rotr", rotr_op},
							  {"stack", stack_mode},
							  {"queue", queue_mode},
							  {NULL, NULL}};

	for (i = 0; instructions[i].opcode; i++)
		if (strcmp(command, instructions[i].opcode) == 0)
			idx = 1, instructions[i].f(stack);
	if (idx == 0)
		fprintf(stderr, "L%d: unknown instruction %s\n", c_Line, command), _exit;
}
/**
 * current_mode - Gets or sets the current mode.
 * @number: The new mode value to set (if non-negative).
 *
 * This function gets or sets the current mode. If the provided number is
 * non-negative, it sets the current mode to that value. Otherwise, it
 * returns the current mode.
 *
 * Return: The current mode.
 *
 * Authors: Ashraf-Atef1 && AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int current_mode(int number)
{
	static int mode;

	if (number >= 0)
		mode = number;
	return (mode);
}
