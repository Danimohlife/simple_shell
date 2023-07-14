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
