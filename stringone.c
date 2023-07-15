#include "main.h"
/**
 * _stringfunc_one - normal strtokn function
 * @string: String
 * @to4ken: Delimiter
 * Return: Pointer Or NULL
 */
char *_stringfunc_one(char *string, const char *to4ken)
{
	unsigned int loop;
	static char *sot, *tin;

	if (string != NULL)
	{
		tin = string;
	}
	sot = tin;
	if (sot == NULL)
		return (NULL);
	for (loop = 0; sot[loop] != '\0'; loop++)
	{
		if (stringfunc_two(sot[loop], to4ken) == 0)
		{
			break;
		}
	}
	if (tin[loop] == '#' || tin[loop] == '\0')
	{
		tin = NULL;
		return (NULL);
	}
	sot = tin + loop;
	tin = sot;
	for (loop = 0; tin[loop] != '\0'; loop++)
	{
		if (stringfunc_two(tin[loop], to4ken) == 1)
			break;
	}
	if (tin[loop] == '\0')
		tin = NULL;
	else
	{
		tin[loop] = '\0';
		tin = tin + loop + 1;
		if (*tin == '\0')
			tin = NULL;
	}
	return (sot);
}

/**
 * for_system - syt func
 * @ld:command to check
 * Return: 0 / -1
 */
int for_system(char **ld)
{
	int i = 0;

	struc_t f[] = {
		{"cd", NULL},
		{"help", NULL},
		{"echo", NULL},
		{"history", NULL},
		{NULL, NULL}
	};

	if (*ld == NULL)
		return (-1);

	while ((f + i)->commands)
	{
		if (stringcompare(ld[0], (f + i)->commands) == 0)
			return (0);
		i++;
	}
	return (-1);
}
