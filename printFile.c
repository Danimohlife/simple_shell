#include "main.h"
/**
 * search_for - Request for a command
 * Return: void
 */
void search_for(void)
{
	REQUEST("$ ");
}
/**
 * error_display - Print error message
 * @input: Input from the user
 * @counter: Loop count
 * @argv: Arrays of string
 * Return: Void
 */
void error_display(char *input, int counter, char **argv)
{
	char *ch;
	REQUEST(argv[0]);
	REQUEST(": ");
	ch = _itoa(counter);
	REQUEST(ch);
	free(ch);
	REQUEST(": ");
	REQUEST(input);
	REQUEST(": not found\n");
}
/**
 * print_number -Print Unsigned Int Putchar
 * @n: Unisigned Integer
 * Return: Void
 */
void print_number(unsigned int n)
{
	unsigned int x = n;
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
**
 * print_number_in -Print Number Putchar
 * @n:Integer
 * Return: void
 */
void print_number_in(int n)
{
	unsigned int x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
