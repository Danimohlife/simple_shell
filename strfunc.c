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
	int a, b = 0;
	int count = _strlen(s1);
	int lean = _strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (1);
	if (count != lean)
		return (1);

	for (a = 0; s1[a]; a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
		else
		{
			continue;
		}
	}
	return (b);
}
/**
 * _itoa - convert int
 * @n: num in consideration
 * Return: ptr
 */
char *_itoa(unsigned int n)
{
	int size;
	int incr = 0;
	char *ptrm;

	size = intlen(n);
	ptrm = malloc(size + 1);

	if (!ptrm)
	{
		return (NULL);
	}
	*ptrm = '\0';

	while (n / 10)
	{
		ptrm[incr] = (n % 10) + '0';
		n /= 10;
		incr++;
	}
	ptrm[incr] = (n % 10) + '0';
	array_rev(ptrm, size);
	ptrm[incr + 1] = '\0';
	return (ptrm);
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
