#include "main.h"
/**
 * _putchar - alx version of stdio lib func putchar
 * @b: one char arg to print at a time
 * Return: c
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}

/**
 * _strlen - len of string
 * @filename: file
 * Return: len
 */
int _strlen(char *filename)
{
	int len = 0;

	while (filename[len] != '\0')
	{
		filename++;
		len++;
	}
return (len);
}
/**
 * _puts - fake puts of c stdio
 * @filename: file to print
 * Return: void function
 */
void _puts(char *filename)
{
	for (i = 0; *filename[i] != '\0'; i++)
	{
		_putchar(filename[i]);
	}
_putchar('\n');
}
/**
 * _strcat - add more string together
 * @destfile: file to add other file to
 * @srcfile: file to add to from
 * Return: destfile
 */
char *_strcat(char *destfile, char *srcfile)
{
	char *u = destfile;

	while (*destfile != '\0')
		destfile++;

	while (*srcfile != '\0')
	{
		*destfile = *srcfile;
		destfile++;
		srcfile++;
	}
	*destfile = '\0';
	return (u);
}
