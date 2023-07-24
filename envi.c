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
		ln = _strlen(environ[lp]);
		write(1, environ[lp], ln);
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
	unsigned int pid = getppid();

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
/**
 * path_r - $PATH 4 Excutable
 * @cdln: input
 * Return: 1 / 0  On Success.
 */
int path_r(char **cdln)
{
	char *line, *deri, *part;
	struct stat buf;

	line = _envro("PATH");
	deri = _strtok(line, ":");
	while (deri != NULL)
	{
		part = crea_pat(*cdln, deri);
		if (stat(part, &buf) == 0)
		{
			*cdln = _strdup(part);
			free(part);
			free(line);
			return (0);
		}
		free(part);
		deri = _strtok(NULL, ":");
	}
	free(line);
	return (1);
}
/**
 * arr_func - for an array
 * @a: to ptr
 * @b: an  int to loop
 * @c: amount of lenght
 * Return: void function
 */
void *arr_func(void *a, int b, unsigned int c)
{
	unsigned int d = 0;
	char *e = a;

	while (d < c)
	{
		*e = b;
		e++;
		d++;
	}
	return (a);
}
