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
