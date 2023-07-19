#include "main.h"
/**
 * oprate_fl - go thru file line
 * @ab: ab
 * @ac: lop
 * @ptr: file pointer
 * @arg: argument
 * Return: void funct
 */
void oprate_fl(char *ab, int ac, FILE *ptr, char **arg)
{
	char **funcall;
	int i = 0;

	funcall = run_c(ab);
	if (_strncmp(funcall[0], "exit", 4) == 0)
		sk_out_file(funcall, ab, ptr);
	else if (rn_sys_fl(funcall) == 0)
	{
		i = sys_fl(funcall, i);
		free(funcall);
	}
	else
	{
		i = run_dr(funcall, ab,  ac, arg);
		free(funcall);
	}
}
