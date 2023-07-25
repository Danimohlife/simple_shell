#include "main.h"
/**
 * _strchr - char
 * @str: string
 * @ch: char
 * Return: chara
 */
char *_strchr(char *str, char ch)
{
	do {
		if (*str == ch)
		{
			break;
		}
	} while (*str++);
return (str);
}
/**
 * _strcmp - strings compared
 * @s1: string to compare
 * @s2: string to compare to
 * Return: de copamr
 */
int _strcmp(char *s1, char *s2)
{
int cmp = 0, i, len1, len2;
len1 = _strlen(s1);
len2 = _strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (1);
	if (len1 != len2)
		return (1);
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (cmp);
}
/**
 * _itoa - convert int
 * @n: num in consideration
 * Return: ptr
 */
char *_itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';
	return (s);
}
/**
 * fre_sys - free Pointer
 * @command: Pointer
 * @ln: char pointer
 * Return: Void
 */
void fre_sys(char **command, char *ln)
{
	free(command);
	free(ln);
	command = NULL;
	ln = NULL;
}
