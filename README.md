# C - Stacks, Queues - LIFO, FIFO :pencil2:
**About:** In this project, we created a simple interpreter for Monty ByteCodes. The interpreter reads a bytecode file and executes the bytecode commands.
> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers concepts of Stacks, Queues, LIFO, FIFO implementation.
This was a duo project with the awesome partner [Karen Herrera](https://github.com/karenaHV/)

At the end of this project, We were able to solve these questions:
  
* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables

## Tasks :heavy_check_mark:

0. Implement the push and pall opcodes
1. Implement the pint opcode.
2. Implement the pop opcode.
3. Implement the swap opcode.
4. Implement the add opcode.
5. Implement the nop opcode.
6. Implement the sub opcode.
7. Implement the div opcode.
8. Implement the mul opcode.
9. Implement the mod opcode.
10. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).
11. Implement the pchar opcode.
12. Implement the pstr opcode.
13. Implement the rotl opcode.
14. Implement the rotr opcode.
15. Implement the stack and queue opcodes.
16. Write a Brainf*ck script that prints Holberton (at bf/dir)
17. Read the two digits from stdin, add them, and print the result (at bf/dir)
18. Read the two digits from stdin, multiply them, and print the result (at bf/dir)
19. Multiply two digits given by the user. (at bf/dir)


## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32



### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd monty
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
USAGE
cat -e bytecodes/000.m

FORT TESTING WITH BYTECODES:
cd bytecodes
cat bytecodes/FILENAME.m
./monty bytecodes/FILENAME.m
```
