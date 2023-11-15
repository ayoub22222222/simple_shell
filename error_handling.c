#include "shell.h"
/**
 * _stat - function that take two argument as a prameters
 * @cmd: parameter one
 * @path: parameter two represent the path or directory
 * Return: 1 on success
 **/
int _stat(char **cmd, char **path)
{
	char *conc_str = NULL, *new_concat = NULL;
	int count;

	struct stat sb;

	if (path == NULL)
	{
		free(path);
		free(cmd);
		return (0);
	}

	for (count = 0; path[count] != NULL ; count++)
	{
		conc_str = str_concat(path[count], "/");
		new_concat = str_concat(conc_str, cmd[0]);
		if (stat(new_concat, &sb) == 0 && (sb.st_mode & S_IXUSR))
		{
			cmd[0] = new_concat;
			free(conc_str);
			free(path[0]);
			free(path);
			return (1);
		}
		free(conc_str);
		free(new_concat);
	}
	free(path[0]);
	free(path);
	return (0);
}
