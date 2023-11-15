#include "shell.h"
/**
 * start_cmd - function that take two argument
 * @array: array argument
 * @av: argument pointer
 * Return: work to ensure the process
*/
void start_cmd(char **array, char *av)
{
	pid_t ch_pid;
	int wait4_child;

	ch_pid = fork();
	if (ch_pid < 0)
	perror("Error");
	else if (ch_pid == 0)
	{
	programe.status = 0;
	execve(array[0], array, environ);
	perror(av);
	exit(0);
	}
	else
	{
	wait(&wait4_child);
	if (WIFEXITED(wait4_child) != 0)
	programe.status = WEXITSTATUS(wait4_child);
	}
}

