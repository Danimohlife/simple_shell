#include "main.h"
/**
 * stringfunc_two - Checks Character Match
 * @cha: Char To copare
 * @string: Str To Compare
 * Return: 1 / 0
 */
unsigned int stringfunc_two(char cha, const char *string)
{
	unsigned int loop = 0;

	for (; string[loop] != '\0'; loop++)
	{
		if (cha == string[loop])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * shellfunct_one - Array of Env Var
 * @shf: Array of Enviroment Variable
 * Return: Void funct
 */
void shellfunct_one(char **shf)
{
	int n;

	for (n = 0; glob_var[n]; n++)
		shf[n] = stringdup(glob_var[n]);
	shf[n] = NULL;
}
