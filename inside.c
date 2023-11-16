#include "shell.h"

/**
 * func_printenv - prints a current environment
 * @environ: environment variable
 */
void func_printenv(char **environ)
{
	int i = 0;

	for (; environ[i] ; i++)
		_puts(environ[i]);
}
