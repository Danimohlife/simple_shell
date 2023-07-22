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

