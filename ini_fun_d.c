#include "main.h"
/**
 * rnthru_fl - go tru file
 * @file: ref to files
 * @env: read name
 * Return: 0 \ -1
 */
void rnthru_fl(char *file, char **env)
{
	FILE *fp;
	char *str = NULL;
	size_t lp = 0;
	int n = 0;

	fp = fopen(file, "r");
	if (fp == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while ((getline(&str, &lp, fp)) != -1)
	{
		n++;
		oprate_fl(str, n, fp, env);

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
	int curr, lp = 0;

	if (cd[1] == NULL)
	{
		free(ln);
		free(cd);
		fclose(ptr);
		exit(errno);
	}
	while (cd[1][lp])
	{
		if (_isalpha(cd[1][lp++]) < 0)
		{
			perror("illegal number");
		}
	}
	curr = _atoi(cd[1]);
	free(ln);
	free(cd);
	fclose(ptr);
	exit(curr);
}
/**
 * handle - Handle prompt
 * @s: take handle
 * Return: Void function
 */
void handle(int s)
{
	if (s == SIGINT)
	{
		PUTCHAR("\n$ ");
	}
}
/**
 * out_sys - quit terminal
 * @cm: command
 * @input: us req
 * @arrfl: Names
 * @i: count
 * Return: Void function
 */
void  out_sys(char **cm, char *input, char **arrfl, int i)
{
	int curr, lp = 0;

	if (cm[1] == NULL)
	{
		free(input);
		free(cm);
		exit(EXIT_SUCCESS);
	}
	while (cm[1][lp])
	{
		if (_isalpha(cm[1][lp++]) != 0)
		{
			_print_er(arrfl, i, cm);
			break;
		}
		else
		{
			curr = _atoi(cm[1]);
			free(input);
			free(cm);
			exit(curr);
		}
	}
}
