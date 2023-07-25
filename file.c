#include "main.h"
/**
 * tm_fc - input tm
 * @pts: input
 * Return: -1 Fail 0 Succes
 */
int tm_fc(char *pts)
{
	char *str = ".shell_history";
	ssize_t pf, pwrit;
	int lp = 0;

	if (!str)
		return (-1);

	pf = open(str, O_CREAT | O_RDWR | O_APPEND, 00600);

	if (pf < 0)
		return (-1);
	if (pts)
	{
		while (pts[lp])
			lp++;
		pwrit = write(pf, pts, lp);
		if (pwrit < 0)
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
	int status;

	pid = fork();
	if (pid == 0)
	{
	if (execve("/bin/echo", command, environ) == -1)
		return (-1);

		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		return (-1);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
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
	char *file = ".shell_history";
	char *line = NULL;
	size_t pln = 0;
	int lp = 0;
	char *ch;
	FILE *ptr;

	ptr = fopen(file, "r");
	if (ptr == NULL)
	{
		return (-1);
	}

	while ((getline(&line, &pln, ptr)) != -1)
	{
		lp++;
		ch = _itoa(lp);
		PUTCHAR(ch);
		free(ch);
		PUTCHAR(" ");
		PUTCHAR(line);
	}
	if (line)
		free(line);
	fclose(ptr);
	return (0);
}
/**
 * _print_er - Print Error
 * @ac:Program Name
 * @i:Error Count
 * @cd:Command
 * Return: Void function
 */
void _print_er(char **ac, int i, char **cd)
{
	char *c = _itoa(i);

	PUTCHAR(ac[0]);
	PUTCHAR(": ");
	PUTCHAR(c);
	PUTCHAR(": ");
	PUTCHAR(cd[0]);
	PUTCHAR(": Illegal number: ");
	PUTCHAR(cd[1]);
	PUTCHAR("\n");
	free(c);
}
