#include "main.h"
#include <stdio.h>
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
			break;
	} while (*str++);

	return (str);
}
/**
 * _strcmp - strings compared
 * @s1: string to compare
 * @s2: string to compare to
 * Return: de copamr
 */
char _strcmp(char *s1, char *s2)
{
	int a, b = 0;

	if ((_strlen(s1) != _strlen(s2)) || (s1 == NULL) || (s2 == NULL))
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

