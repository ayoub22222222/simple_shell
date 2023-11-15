#include "shell.h"
/**
 * rtn_str - function that take one param
 * @s: argument pointer
 * Return: return the given string
*/
void rtn_str(char *s)
{
	int cnt;
	char character;

	cnt = 0;
	while (s[cnt])
	{
		character = s[cnt];
		write(1, &character, 1);
		cnt++;
	}
	write(1, "\n", 1);
}
