#include "main.h"
/**
 * curr_en - envir var
 * @cd: parsed Command
 * @num: last comm
 * Return: 0 on s
 */
int curr_en(__attribute__((unused)) char **cd, __attribute__((unused)) int num)
{
	size_t lp;
	int ln;

	for (lp = 0; environ[lp] != NULL; lp++)
	{
		ln = _strlen(ent[lp]);
		write(1, ent[lp], ln);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
/**
 * bult_in - echo
 * @str: command
 * @cd: Pa
 * Return: 0
 */
int bult_in(char **cd, int str)
{
	char *path;
	unsigned int pid;

	pid = getppid();

	if (_strncmp(cd[1], "$?", 2) == 0)
	{
		cal_in_num(str);
		PUTCHAR("\n");
	}
	else if (_strncmp(cd[1], "$$", 2) == 0)
	{
		cal_num(pid);
		PUTCHAR("\n");
	}
	else if (_strncmp(cd[1], "$PATH", 5) == 0)
	{
		path = _envro("PATH");
		PUTCHAR(path);
		PUTCHAR("\n");
		free(path);
	}
	else
		return (echo_com(cd));
	return (1);
}
