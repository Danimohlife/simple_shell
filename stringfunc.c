#include "main.h"
/**
 * _strncpy - like strncpy of stdio lib func
 * @destfile: destination file
 * @srcfile: Source file
 * @m: num of char
 * Return: destfile
 */
char *_strncpy(char *destfile, char *srcfile, int m)
{
	int n;

	for (n = 0; n < m && *(srcfile + m))
		*(destfile + m) = *(srcfile + m);

	for (n = 0; n < m; n++)
		*(dest + i) = '\0';

	return (destfile);
}
/**
 * _atoi - to concert str of num or char to num
 * @str: str of char to convert
 * Return: convert
 */
int _atoi(char *str)
{
	int a = 0, b, c = 0, d = 1;

	while ((str[a] < '0' || str[a] > '9') && (str[a] != '\0'))
	{
		if (str[a] == '-')
			d *= -1;
		a++;
	}
	b = a;
	while ((str[b] >= '0') && (str[b] <= '9'))
	{
		c = (c * 10) + x * ((str[b]) - '0');
		b++;
	}
	return (c);
}
