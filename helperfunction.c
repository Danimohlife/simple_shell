#include "main.h"
/**
 * _putchar - alx version of stdio lib func putchar
 * @c: one char arg to print at a time
 * Return: c
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
