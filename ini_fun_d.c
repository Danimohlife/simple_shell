#include "main.h"
/**
 * rnthru_fl - go tru file
 * @file: ref to files
 * @env: read name
 * Return: 0 \ -1
 */
void rnthru_fl(char *file, char **env)
{
	size_t ab = 0;
	int bc = 0;
	char *str = NULL;
	FILE *fp;

	fp = fopen(file, "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((getline(&str, &ab, fp)) != -1)
	{
		bc++;
		oprate_fl(str, bc, fp, evn);
	}

	if (str)
		free(str);
	fclose(fp);
	exit(0);
}
/**
 * sk_out_file - Exit File
 * @ln: A File
 * @cd: Parsed Command
 * @ptr: File Desc
 * Return : void function
 */
void sk_out_file(char **cd, char *ln, FILE *ptr)
{
	int current, n = 0;

	if (cd[1] == NULL)
	{
		free(ln);
		free(cd);
		fclose(ptr);
		exit(errno);
	}

	while (cd[1][n])
	{
		if (_isalpha(cd[1][n++]) < 0)
			perror("illegal number");
	}
	current = _atoi(cd[1]);
	free(ln);
	free(cd);
	fclose(ptr);
	exit(current);
}
/**
 * handle - Handle prompt
 * @s: take handle
 * Return: Void function
 */
void handle(int s)
{
	if (s == SIGINT)
		HANDLER("\n$ ");
}
