#include "main.h"
/**
 * delim - checking a char
 * @c: first char check
 * @str: Str check
 * Return: 1 / 0
 */
unsigned int delim(char c, const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}

/**
 * error_r - work out error
 * @input: command inp
 * @num: from strlen
 * @arr: filename
 * Return: void function
 */
void error_r(char *input, int num, char **arr)
{
	char *toa;

	toa = _itoa(num);

	PUTCHAR(arr[0]);
	PUTCHAR(": ");
	PUTCHAR(toa);
	free(toa);
	PUTCHAR(": ");
	PUTCHAR(input);
	PUTCHAR(": not found\n");
}
/**
 * cal_in_num - cal_in_num func
 * @num: an int
 * Return: void funct
 */
void cal_in_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		cal_num(num / 10);

	_putchar((num % 10) + '0');
}
/**
 * _strtok - strtrok
 * @str: string
 * @fil: D
 * Return: the Next token
 */
char *_strtok(char *str, const char *fil)
{
	static char *string, *gh;
	int lp;

	if (str != NULL)
		gh = str;
	string = gh;
	if (string == NULL)
		return (NULL);
	for (lp = 0; string[lp] != '\0'; lp++)
	{
		if (delim(string[lp], fil) == 0)
			break;
	}
	if (gh[lp] == '\0' || gh[lp] == '#')
	{
		gh = NULL;
		return (NULL);
	}
	string = gh + lp;
	gh = string;
	for (lp = 0; gh[lp] != '\0'; lp++)
	{
		if (delim(gh[lp], fil) == 1)
			break;
	}
	if (gh[lp] == '\0')
		gh = NULL;
	else
	{
		gh[lp] = '\0';
		gh = gh + lp + 1;
		if (*gh == '\0')
			gh = NULL;
	}
	return (string);
}
