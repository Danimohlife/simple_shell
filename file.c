#include "main.h"
/**
 * tm_fc - input tm
 * @pts: input
 * Return: -1 Fail 0 Succes
 */
int tm_fc(char *pts)
{
	char *name = ".simple_shell_history";
	ssize_t fd, wr;
	int lp = 0;

	if (!name)
		return (-1);
	fd = open(name, O_CREAT | O_RDWR | O_APPEND, 00600);
	if (fd < 0)
		return (-1);
	if (pts)
	{
		while (pts[lp])
			lp++;
		wr = write(fd, pts, lp);
		if (wr < 0)
			return (-1);
	}
	return (1);
}
/**
 * echo_com - echo
 * @command: command
 * Return: 0 / -1
 */
int echo_com(char **command)
{
	pid_t pid;
	int i;

	pid = fork();
	if (pid == 0)
	{
	if (execve("/bin/echo", command, environ) == -1)
	{
		return (-1);
	}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		return (-1);
	}
	else
	{
		do {
			waitpid(pid, &i, WUNTRACED);
		} while (!WIFEXITED(i) && !WIFSIGNALED(i));
	}
	return (1);
}

/**
 * tm_func - diplay all that is done.
 * @str: not used
 * @i: not used
 * Return: 0 / -1
 */
int tm_func(__attribute__((unused))char **str, __attribute__((unused))int i)
{
	char *name = ".simple_shell_history";
	FILE *fp;
	char *strl = NULL;
	size_t n = 0;
	int lp = 0;
	char *c;

	fp = fopen(name, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	while ((getline(&strl, &n, fp)) != -1)
	{
		lp++;
		c = _itoa(lp);
		PUTCHAR(er);
		free(c);
		PUTCHAR(" ");
		PUTCHAR(strl);

	}
	if (strl)
		free(strl);
	fclose(fp);
	return (0);
}
/**
 * _print_er - Print Error
 * @ac:Program Name
 * @i:Error Count
 * @cd:Command
 * Return: Void function
 */
void _print_er(char *cd, int i, char **ac)
{
	char *c;

	PUTCHAR(ac[0]);
	PUTCHAR(": ");
	c = _itoa(i);
	PUTCHAR(er);
	free(er);
	PUTCHAR(": ");
	PUTCHAR(cd);
	PUTCHAR(": not found\n");
}
