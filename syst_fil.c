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
/**
 * sys_fl - system function call
 * @com: command
 * @num: hw many time
 * Return: -1 / 0
 */
int sys_fl(char **com, int num)
{
	int nm;

	stru_t sys[] = {
		{"cd", dir_recu},
		{"env", curr_ev},
		{"help", help_fnc},
		{"echo", bult_in},
		{"history", tm_func},
		{NULL, NULL}
	};
	nm = 0;
	while ((sys + nm)->comm)
	{
		if (_strcpm(com[0], (sys + nm)->comm) == 0)
			return ((sys + nm)->fptr(ln, n));
		nm++;
	}
	return (-1);
}
/**
 * run_dr - sys files
 * @cd: intake
 * @filename: inp
 * @i: int
 * @arrfl: array of calls
 * Return: 1 / 0 / -1
 */
int run_dr(char **cd, char *filename, int i, char **arrfl)
{
	int  curr;
	pid_t pid;

	if (*cd == NULL)
		return (-1);
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		if (_strncmp(*cd, "./", 2) != 0 && _strncp(*cd, "/", 1) != 0)
			path_r(cd);

		if (execve(*cd, cd, ent) == -1)
		{
			error_r(cd[0], i, arrfl);
			free(filename);
			free(cd);
			exit(EXIT_FAILURE);
		}
		return (EXIT_SUCCESS);
	}
	wait(&curr);
	return (0);
}
