#include "shell.h"
#include "g_shell.h"
/**
 * main - entry point that display the prompt
 * @argc: argument counter take the number of arg
 * @argv: argument vector
 * Return: dispaly the prompt
*/





int main(int argc, char **argv)
{
	char *input;
	size_t lenght;
	ssize_t read;

	void(argc);
	programe.name = argv[0];
	input = NULL;
	lenght = 0;
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		read = getline(&input, &lenght, stdin);
		programe.count++;
		if (read < 1)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 1);
			free(input);
			exit(programe.status);
		}
		user_input[read - 1] = '\0';
		helper(input, argv[0]);
	}
}
