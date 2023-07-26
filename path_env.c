#include "main.h"
/**
 * _envro - Envir Var
 * @dm: var name
 * Return: Value Environment
 */
char *_envro(char *dm)
{
	size_t ln, l;
	char *val;
	int lp, lop, lop2;

	ln = _strlen(dm);
	for (lp = 0 ; environ[lp]; lp++)
	{
		if (_strncmp(dm, environ[lp], ln) == 0)
		{
			l = _strlen(environ[lp]) - ln;
			val = malloc(sizeof(char) * l);
			if (!val)
			{
				free(val);
				perror("unable to alloc");
				return (NULL);
			}

			lop2 = 0;
			for (lop = ln + 1; environ[lp][lop]; lop++, lop2++)
			{
				val[lop2] = environ[lp][lop];
			}
			val[lop2] = '\0';

			return (val);
		}
	}

	return (NULL);
}
/**
 * _new_ln - \n
 * Return: Input
 */
char *_new_ln()
{
int i, size = BUFFERSIZE, rd;
char c = 0;
char *mal = malloc(size);

	if (mal == NULL)
	{
		free(mal);
		return (NULL);
	}

	for (i = 0; c != EOF && c != '\n'; i++)
	{
		fflush(stdin);
		rd = read(STDIN_FILENO, &c, 1);
		if (rd == 0)
		{
			free(mal);
			exit(EXIT_SUCCESS);
		}
		mal[i] = c;
		if (mal[0] == '\n')
		{
			free(mal);
			return ("\0");
		}
		if (i >= size)
		{
			mall = _realloc(mal, size, size + 1);
			if (mal == NULL)
			{
				return (NULL);
			}
		}
	}
	mal[i] = '\0';
	tags(mal);
	return (mal);
}

/**
 * _calloc - memories allocation 2
 * @size: total allocation
 * Return: ptr to
 */
void *_calloc(unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0)
	return (NULL);
	a = malloc(size);
	if (a == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
/**
 * run_c - Parse Line Of Input
 * @inp:User Input To Parse
 * Return: arr of char
 */
char **run_c(char *inp)
{
	char **tokenis;
	char *tok;
	int l, size = BUFFERSIZE;

	if (inp == NULL)
		return (NULL);
	tokenis = malloc(sizeof(char *) * size);
	if (!tokenis)
	{
		perror("hsh");
		return (NULL);
	}

	tok = _strtok(inp, "\n ");
	for (l = 0; tok; l++)
	{
		tokenis[l] = tok;
		tok = _strtok(NULL, "\n ");
	}
	tokenis[l] = NULL;

	return (tokenis);
}

