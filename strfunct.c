#include "main.h"
/**
 * _strncmp - compare str.
 * @file1: first to string to cmp.
 * @file2: sencond to com wit
 * @num: Num of char
 * Return: 0 / 1
 */
int _strncmp(const char *file1, const char *file2, size_t num)
{
	size_t i;

	if (file1 == NULL)
		return (-1);

	for (i = 0; i < num && file2[i]; i++)
	{
		if (file1[i] != file2[i])
			return (1);
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
	size_t lp, strlen;
	char *ptrm;

	strlen = _strlen(str);
	ptrm = malloc(sizeof(char) * (strlen + 1));

	if (!ptrm)
		return (NULL);

	for (lp = 0; lp <= strlen; lp++)
		ptrm[lp] = str[lp];

	return (ptrm);
}
/**
 * _isalpha - Checking if it is Alphabtic
 * @c: Char to check
 * Return: 1 / 0
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
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
