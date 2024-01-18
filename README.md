#Description
Monty is an interpreter for Monty bytecode. It reads and interprets Monty bytecode from a file, executing the corresponding commands. Monty supports both stack (LIFO) and queue (FIFO) modes.

#Compilation
To compile the Monty interpreter, use the following command:

bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
Usage
To run Monty with a bytecode file, use the following command:

bash
./monty <filename>

#Instructions
push - Pushes an integer onto the stack.
pall - Prints all the elements of the stack.
pint - Prints the value at the top of the stack.
pop - Removes the top element of the stack.
swap - Swaps the top two elements of the stack.
add - Adds the top two elements of the stack.
nop - Does nothing with the stack.
sub - Subtracts the top element from the second element of the stack.
div - Divides the second element by the top element of the stack.
mul - Multiplies the top two elements of the stack.
mod - Computes the modulus of the second element by the top element of the stack.
pchar - Prints the ASCII character corresponding to the top element of the stack.
pstr - Prints the string represented by the stack's ASCII values.
rotl - Rotates the stack to the left.
rotr - Rotates the stack to the right.
stack - Sets the current mode to stack (LIFO).
queue - Sets the current mode to queue (FIFO).
Example
bash
Copy code
./monty bytecode.m
#File Structure
essentials.c - Contains essential utility functions.
instructions_1.c - Contains stack manipulation instructions.
instructions_2.c - Contains arithmetic and logic instructions.
instructions_3.c - Contains printing instructions.
instructions_4.c - Contains rotation and mode-setting instructions.
main.c - Entry point for the Monty interpreter.
linkedList.c - Contains functions related to the doubly linked list.
#Contributors
Ashraf
Ahmed
License
This project is not licensed. Feel free to use and modify as needed.
