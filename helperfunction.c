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

	while (*filename != '\0')
	{
		filename++;
		len++;
	}
	return (len);
}
