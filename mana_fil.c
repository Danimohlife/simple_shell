#include "main.h"
/**
 * error_r - work out error
 * @input: command inp
 * @num: from strlen
 * @arr: filename
 * Return: void function
 */
void error_r(char input, int num, char **arr)
{
	char *toa;

	toa = _itoa(num);

	PUTCHAR(arr[0]);
	PUTCHAR(": ");
	PUTCHAR(toa);
	free(toa);
	PUTCHAR(": ");
	PUTCHAR(input);
	PUTCHAR(": not found\n");
}
/**
 * cal_in_num - cal_in_num func
 * @num: an int
 * Return: void funct
 */
void cal_in_num(int num)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		cal_num(n / 10);

	_putchar((num % 10) + '0');
}
