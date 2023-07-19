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
