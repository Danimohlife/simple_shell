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

	for (i = 0; i < n && file2[i]; i++)
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
