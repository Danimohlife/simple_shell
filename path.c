#include "main.h"
/**
 * crea_pat - path
 * @ccs: token
 * @access: given path
 * Return: path
 */
char *crea_pat(char *ccs, char *access)
{
	char *command;
	size_t ln;

	len = _strlen(access) + _strlen(ccs) + 2;
	commmand = malloc(sizeof(char) * ln);
	if (command == NULL)
	{
		return (NULL);
	}

	memset(command, 0, ln);

	cmd = _strcat(command, access);
	cmd = _strcat(command, "/");
	cmd = _strcat(command, ccs);

	return (command);
}

/**
 * env_f - realese environ
 * @en: var
 * Return: void function
 */
void env_f(char **en)
{
	int num;

	for (num = 0; en[num]; num++)
	{
		free(en[num]);
	}
}
/**
 * tags - move env
 * @b: buf
 * Return: void function
 */
void tags(char *b)
{
	int l;

		for (l = 0; b[] != '\0'; l++)
		{
			if (b[l] == '#')
			{
			[l] = '\0';
			break;
			}
	}
}
/**
 * _memcpy - copy src file to dest file
 * @src: src file
 * @dest: dest file
 * @n: num
 * Return: dest file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
