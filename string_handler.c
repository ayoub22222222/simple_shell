#include "shell.h"
/**
 * _strcmp - is a function that take two argument
 * @s1: argument number one
 * @s2: argument number two
 * Return: return sucess and compare two string
 */
int _strcmp(char *s1, char *s2)
{
        char *p1 = s1;
        char *p2 = s2;

        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
                p1++;
                p2++;
        }
        return (*p1 - *p2);
}

