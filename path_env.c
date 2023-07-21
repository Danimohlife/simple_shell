#include "main.h"
/**
 * _envro - Envir Var
 * @dm: var name
 * Return: Value Environment
 */
char *_envro(char *dm)
{
	size_t a, b;
	char *val;
	int lp, lps, lop;

	a = _strlen(dm);
	for (lp = 0 ; environ[lp]; lp++)
	{
		if (_strncmp(dm, environ[lp], a) == 0)
		{
			b = _strlen(environ[lp]) - a;
			val = malloc(sizeof(char) * b);
			if (!val)
			{
				free(val);
				perror("unable to alloc");
				return (NULL);
			}
			j = 0;
			for (lp2 = a + 1; environ[lp][lps]; lps++, lop++)
				val[lop] = environ[lp][lps];
			val[lop] = '\0';
			return (val);
		}
	}
	return (NULL);
}
/**
 * _new_ln - \n
 * Return: Input
 */
char *_new_ln(void)
{
	int num = BUFFERSIZE;
	int nl, frd;
	char s = 0;
	char *mal = malloc(num);

	if (mal == NULL)
	{
		free(mal);
		return (NULL);
	}

	for (nl = 0; s != EOF && s != '\n'; nl++)
	{
		fflush(stdin);
		frd = read(STDIN_FILENO, &s, 1);
		if (frd == 0)
		{
			free(mal);
			exit(EXIT_SUCCESS);
		}
		mal[nl] = s;
		if (mal[0] == '\n')
		{
			free(mal);
			return ("\0");
		}
		if (nl >= num)
		{
			mal = _realloc(mal, num, num + 1);
			if (mal == NULL)
				return (NULL);
		}
	}
	mal[nl] = '\0';
	tags(mal);
	return (mal);
}
