#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>
extern char **environ;

struct sh_st
{
	char *name;
	int count;
	int status;
};
typedef struct sh_st shl;
extern shl programe;
char **p_argument(char *user_input, char *delim);
void start_cmd(char **arr, char *av);
int ve_cmd(char *executable);
int builtin_handler(char **arr, char *input);
int ve_sl(char *executable_holder);
void helper(char *user_input, char *av);
char *update_buf(char *s);
void rtn_str(char *s);
#endif
