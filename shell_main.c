#include "main.h"
/**
 * main - main shell
 * @argc: first arg count
 * @argv: second arg of command arr
 * Return: 0;
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	char *getfile, **func;
	int lp = 0, curr = 1, st = 0;

	if (argv[1] != NULL)
		rnthru_fl(argv[1], argv);
	signal(SIGINT, handle);
	while (curr)
	{
		lp++;
		if (isatty(STDIN_FILENO))
			shell_prompt();
		getfile = _new_ln();
		if (getfile[0] == '\0')
			continue;

		tm_fc(getfile);
		func = run_c(getfile);
		if (_strcmp(func[0], "exit") == 0)
			out_sys(func, getfile, argv, lp);
		else if (rn_sys_fl(func) == 0)
		{
			st = sys_fl(func, st);
			fre_sys(func, getfile);
			continue;
		}
		else
		{
			st = run_dr(func, getfile, lp, argv);

		}
		fre_sys(func, getfile);
	}
	return (curr);
}
/**
 * rn_sys_fl - check sys
 * @shel:command to check
 * Return: 0 / -1
 */
int rn_sys_fl(char **shel)
{
	int lp = 0;

	stru_t arr[] = {
		{"cd", NULL},
		{"help", NULL},
		{"echo", NULL},
		{"history", NULL},
		{NULL, NULL}
	};

	if (*shel == NULL)
	{
		return (-1);
	}

	while ((arr + lp)->comm)
	{
		if (_strcmp(shel[0], (arr + lp)->comm) == 0)
			return (0);
		lp++;
	}
	return (-1);
}
/**
 * environment - Creat Array of Enviroment Variable
 * @sh: Array of Enviroment Variable
 * Return: Void
 */
void environment(char **sh)
{
	int lp;

	for (lp = 0; environ[lp]; lp++)
		sh[lp] = _strdup(environ[lp]);
	sh[lp] = NULL;
}
