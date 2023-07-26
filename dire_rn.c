#include "main.h"
/**
 * cal_num - num func cal
 * @n: an int
 * Return: 0
 */
void cal_num(unsigned int n)
{
	unsigned int x = n;

	if ((x / 10) > 0)
		cal_num(x / 10);

	_putchar(x % 10 + '0');
}

/**
 * dir_recu - directory
 * @str: ptr
 * @num: not used
 * Return: 0
 */
int dir_recu(char **str, __attribute__((unused))int num)
{
	int value = -1;
	char cwd[PATH_MAX];

	if (str[1] == NULL)
		value = chdir(getenv("HOME"));
	else if (_strcmp(str[1], "-") == 0)
	{
		value = chdir(getenv("OLDPWD"));
	}
	else
		value = chdir(str[1]);

	if (value == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (value != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}

/**
 * shell_prompt - prompt
 * Return: void func
 */
void shell_prompt(void)
{
	PUTCHAR("$ ");
}
/**
 * help_fnc - fhelp function
 * @cd: comm
 * @num: cuurn
 * Return: 0 / -1
 */
int help_fnc(char **cd, __attribute__((unused))int num)
{
	int wr, fd, rd = 1;
	char s;

	fd = open(cd[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error");
		return (0);
	}
	while (rd > 0)
	{
		rd = read(fd, &s, 1);
		wr = write(STDOUT_FILENO, &s, rd);
		if (wr < 0)
		{
			return (-1);
		}
	}
	_putchar('\n');
	return (0);
}
