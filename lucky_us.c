#include "shell.h"
/**
 * prompt - function that take no argument
 * Return: mimic the prompt behivor
*/


void prompt(void)
{
	printf("#cisfun$ ");
	fflush(stdout);
}

/**
 * main - entry point helps us to preform the prompt
 * Return: return the prompte
*/


int main(void)
{
	char command[MAX];

	while (1)
	{
	prompt();


	if (fgets(command, sizeof(command), stdin) == NULL)
	{
	printf("\n");
	break;
	}
	command[strcspn(command, "\n")] = '\0';

	printf("You entered: %s\n", command);
	}
	return (0);
}

