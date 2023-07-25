#include "main.h"
/**
 * _putchar - alx version of stdio lib func putchar
 * @c: one char arg to print at a time
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - len of string
 * @s: file
 * Return: len
 */
int _strlen(char *s)
{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			continue;
		}
return (i);
}

/**
 * _puts - fake puts of c stdio
 * @str: file to print
 * Return: void function
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
return;
}

/**
 * _strcat - add more string together
 * @dest: file to add other file to
 * @src: file to add to from
 * Return: destfile
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
