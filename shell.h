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
void helper(char *input, char *av);
#endif
