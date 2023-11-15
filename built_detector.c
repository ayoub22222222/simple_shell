#include "shell.h"
/**
 * builtin_handler - is a function thathandle builtin cmd
 * @arr: arry of argument
 * @input: input user
 * Return: return seccess
*/
int builtin_handler(char **arr, char *input)
{
	if (strcmp(arr[0], "exit") == 0)
	{
		b_exit(arr, input);
		return (1);
	}
	else if (strcmp(arr[0], "env") == 0)
		return (env(arr_holder));
	return (0);
}
