#include "shell.h"
/**
 * main - function that take tree paramters an argument
 * @ac: argument counter
 * @av: argument vectors
 * @env: environment variable
 * Return: return sucess
 */

int main(int ac __attribute__((unused)), char **av, char **env)
{
        char *line;
        char **args, **path;
        int count = 0, status = 0;

        (void) av;
        signal(SIGINT, handle_signal);
        while (1)
        {
                prompt();
                line = read_input();
                args = sparse_str(line, env);

                if ((_strcmp(args[0], "\n") != 0) && (_strcmp(args[0], "env") != 0))
                {
                        count += 1;
                        path = search_path(env);
                        status = _stat(args, path);
                        child_process(av, args, env, status, count);
                }
                else
                {
                        free(args);
                }
                free(line);
        }
        return (EXIT_SUCCESS);
}
