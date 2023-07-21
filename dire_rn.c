#include "main.h"
/**
 * dir_recu - directory
 * @str: ptr
 * @num: not used
 * Return: 0
 */
int dir_recu(char **str, int num)
{
	char rt[PATH_MAX];
	int i = -1;
	(void)num;

	if (str[1] == NULL)
		i = chdir(getenv("HOME"));
	else if (_strcmp(str[1], "-") == 0)
		i = chdir(getenv("OLDPWD"));
	else
		i = chdir(str[1]);

	if (i == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (i != -1)
	{
		getcwd(rt, sizeof(rt));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", rt, 1);
	}
	return (0);
}
/**
 * help_fnc - fhelp function
 * @cd: comm
 * @num: cuurn
 * Return: 0 / -1
 */
int help_fnc(char **cd, int num)
{
	char ch;
	int fa, fb, c = 1;

	fb = open(cd[1], O_RDONLY);
	if (fb < 0)
	{
		perror("Error");
		return (0);
	}

	while (c > 0)
	{
		c = read(fb, &ch, 1);
		fa = write(STDOUT_FILE, &ch, c);

		if (fa < 0)
			return (-1);
	}
	_putchar('\n);
	return (0);
}
