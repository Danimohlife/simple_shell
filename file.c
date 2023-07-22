#include "main.h"
/**
 * tm_fc - input tm
 * @pt: input
 * Return: -1 Fail 0 Succes
 */
int tm_fc(char *pt)
{
	char *name = ".shell_history";
	ssize_t pf, pwrit;
	int lp = 0;

	if (!name)
		return (-1);

	pf = open(name, O_CREAT | O_RDWR | O_APPEND, 00600);

	if (pf < 0)
		return (-1);
	if (pt)
	{
		while (pt[lp])
			lp++;
		pwrit = write(pf, pt, lp);
		if (pwrit < 0)
			return (-1);
	}
	return (1);
}
/**
 * tm_func - diplay all that is done.
 * @str: not used
 * @i: not used
 * Return: 0 / -1
 */
int tm_func(__attribute__((unused))char **str, __attribute__((unused))int i)
{
	char *file = ".shell_history";
	char *line = NULL;
	size_t pln = 0;
	int lp = 0;
	char *ch;
	FILE *ptr;

	ptr = fopen(file, "r");
	if (ptr == NULL)
		return (-1);

	while ((getline(&line, &pln, ptr)) != -1)
	{
		lp++;
		ch = _itoa(lp);
		PRINTER(ch);
		free(ch);
		PRINTER(" ");
		PRINTER(line);
	}
	if (line)
		free(line);
	fclose(ptr);
	return (0);
}
