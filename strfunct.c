#include "main.h"
/**
 * _strncmp - compare str.
 * @s1: first to string to cmp.
 * @s2: sencond to com wit
 * @n: Num of char
 * Return: 0 / 1
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _strdup - Duplicat char
 * @str:  string
 * Return: dp
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *st;

	len = _strlen(str);
	st = malloc(sizeof(char) * (len + 1));
	if (!st)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		st[i] = str[i];
	}

	return (st);
}
/**
 * _isalpha - Checking if it is Alphabtic
 * @c: Char to check
 * Return: 1 / 0
 */
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
{
return (1);
}
else
{
return (0);
}
}

/**
 *  array_rev - Reverse Array
 * @arr:Array To Reverse
 * @len:Length Of Array
 * Return: Void(Reverse Array)
 */
void array_rev(char *arr, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = tmp;
	}
}
