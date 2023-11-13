# 0x16. C - Simple Shell 

**README FILE**
 
 **Description** :pencil:

 This endeavor represents the realization of a shell, conceived as a significant milestone in the C code curriculum at ALX Africa Software Engineering. The Gates of Shell, undertaken during the initial trimester, serves as an educational initiative designed to deepen students' comprehension of advanced shell programming concepts. These encompass processes, system calls, bit manipulation, file management, and error handling.

 Shell is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh).

This program was written entirely in C Language.

## COPYRIGHT 

Copyright (C) 2023 by [**Mohammed Ayoub ESSBAI**](https://github.com/ayoub22222222) and [**Zineb ZID**](https://github.com/Zinebb12)

All rights reserved . 

## DESCRIPTION 

This is a shell written in [**C**](https://en.wikipedia.org/wiki/C_(programming_language)) based on [**the Thompson Shell**](https://en.wikipedia.org/wiki/Thompson_shell) . 

## ENVIRONMENT 

Our shell is built and tested on Ubuntu 14.04 LTS.

## FEATURES 

  - Display a prompt and wait for the user to type a command. A command line always ends with a new line.
  - If an executable cannot be found, print an error message and display the prompt again.
  - Handle errors.
  - Handling the “*end of file*” condition (Ctrl+D) . 
  - Handling the command line with arguments .
  - Handle the PATH.
  - Support the exit features and the exit status . 
  - Handle the Ctrl-C to not terminate the shell .
  - Handling && and || logical operators . 
  - Handle variable replacements $? and $$ . 
  - Handle the comments # . 
  - Support the file input . 
  
## COMPILATION 

The Shell is compiled this way :  

- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## FUNCTION PROTOTYPES 

The header file declares several function prototypes for the shell program, including:

- prompt(): prints the shell prompt

- execute(): executes a command with arguments

- get_line(): Read input from the standard input. Custom getline().

- get_input(): Retrieves user input from stdin. Uses getline().

- tokenize(): parsing user input into arguments.

- handle_sigint(): signal handler for SIGINT

- handle_sigstp(): signal handler for SIGSTP

- handle_sigquit(): signal handler for SIGQUIT

- check_for_builtin(): checks if a command is a shell builtin

- -shell_env(): prints environment variables

- shell_setenv(): sets an environment variable

- shell_unsetenv(): unsets an environment variable

- shell_help(): prints help information for the shell

- shell_cd(): changes the current working directory

- shell_exit(): exits the shell program with a status code

- _getenv(): retrieves the value of an environment variable

- find_in_path(): searches for a command in the directories specified by the PATH environment variable

- get_path(): retrieves the PATH environment variable

- set_path(): sets the PATH environment variable

- append_to_path(): appends a directory to the PATH environment variable

- prepend_to_path(): prepends a directory to the PATH environment variable

- free_error(): frees memory allocated following system error

- free_tokens(): frees memory allocated for tokens

- _puterror(): prints an error message

- _puts(): prints a string

- _atoi(): converts a string to an integer

- _putchar(): prints a character

- _strlen(): gets the length of a string

- _strcmp(): compares two strings

- _strcpy(): copies a string

- _strcat(): concatenates two strings

- _strdup(): duplicates a string

- _strchr(): searches a string for a character

- _strstr(): searches for the first occurrence of a substring

- _strspn(): gets the length of a prefix substring

## CONTRIBUTORS 

- [Mohammed Ayoub ESSBAI](https://github.com/ayoub22222222)
- [Zineb ZID](https://github.com/Zinebb12) 
