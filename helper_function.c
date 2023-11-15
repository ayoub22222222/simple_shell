#include "shell.h"
/**
 * helper - is a ahleper function that take two arg
 * @input: input user
 * @av: argument vectors
 * Return: execute the code
*/
void helper(char *input, char *av)
{
	char **arr, *tmp;
	int cmd_st, status1, status2;

	arr = p_argument(input, " \t");
	if (arr == NULL)
		return;
	if (arr[0] == NULL)
	{
		free(arr);
		return;
	}

	status2 = builtin_handler(arr, input);
	if (status2 == 1)
	{
		free(arr);
		return;
	}

	cmd_st = ve_cmd(arr[0]);
	status1 = ve_sl(arr[0]);
	if (status1 == 0 || cmd_st == 0)
		start_cmd(arr, av);
	else
	{
		tmp = arr[0];
		arr[0] = update_buf(arr[0]);
		if (arr[0] == NULL)
		{
			programe.status = 127;
			fprintf(stderr, "%s: %d: %s: not found\n",
					programe.name, programe.count, tmp);
		}
		else
		{
			start_cmd(arr, av);
			free(arr[0]);
		}
	}
	free(arr);
}
