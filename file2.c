#include "main.h"
/**
 * delim - checking a char
 * @c: first char check
 * @str: Str check
 * Return: 1 / 0
 */
unsigned int delim(char c, const char *str)
{
	unsigned int lp;

	for (lp = 0; str[lp] != '\0'; lp++)
	{
		if (c == str[lp])
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
	char *ch;

	PUTCHAR(arr[0]);
	PUTCHAR(": ");
	ch = _itoa(num);
	PUTCHAR(ch);
	free(ch);
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
	unsigned int i = num;

	if (num < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		cal_num(i / 10);

	_putchar(i % 10 + '0');
}
/**
 * _strtok - strtrok
 * @str: string
 * @fil: D
 * Return: the Next token
 */
char *_strtok(char *str, const char *fil)
{
	static char *s;
	static char *c;
	unsigned int lp;

	if (str != NULL)
		c = str;
	s = c;
	if (s == NULL)
		return (NULL);
	for (lp = 0; s[lp] != '\0'; lp++)
	{
		if (delim(s[lp], fil) == 0)
			break;
	}
	if (c[lp] == '\0' || c[lp] == '#')
	{
		c = NULL;
		return (NULL);
	}
	s = c + lp;
	c = s;
	for (lp = 0; c[lp] != '\0'; lp++)
	{
		if (delim(c[lp], fil) == 1)
			break;
	}
	if (c[lp] == '\0')
		c = NULL;
	else
	{
		c[lp] = '\0';
		c = c + lp + 1;
		if (*c == '\0')
			c = NULL;
	}
	return (s);
}
