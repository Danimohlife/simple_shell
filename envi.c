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
	int n;

	for (lp = 0; environ[lp] != NULL; lp++)
	{
		n = _strlen(environ[lp]);
		write(1, environ[i], n);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
/**
 * bult_in - echo
 * @str: command
 * @num: Pa
 * Return: 0
 */
int bult_in(char **str, int num)
{
	char *p;
	unsigned int  pid = getppid();

	if (_strncmp(str[1], "$?", 2) == 0)
	{
		cal_in_num(num);
		PUTCHAR("\n");
	}
	else if (_strncmp(str[1], "$$", 2) == 0)
	{
		cal_num(pid);
		PUTCHAR("\n");

	}
	else if (_strncmp(str[1], "$PATH", 5) == 0)
	{
		p = _getenv("PATH");
		PUTCHAR(path);
		PUTCHAR("\n");
		free(p);

	}
	else
		return (echo_com(str));

	return (1);
}
/**
 * path_r - $PATH 4 Excutable
 * @cdln: input
 * Return: 1 / 0  On Success.
 */
int path_r(char **cdln)
{
	char *p, *value, *cp;
	struct stat buf;

	p = _envro("PATH");
	value = _strtok(p, ":");
	while (value != NULL)
	{
		cp = crea_pat(*cdln, value);
		if (stat(cp, &buf) == 0)
		{
			*cdln = _strdup(cp);
			free(cp);
			free(p);
			return (0);
		}
		free(cp);
		value = _strtok(NULL, ":");
	}
	free(p);

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
	char *ch = a;
	unsigned int lp = 0;

	while (lp < c)
	{
		*ch = b;
		ch++;
		lp++;
	}
	return (a);
}
