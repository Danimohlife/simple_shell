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
	{
		sk_out_file(funcall, ab, ptr);
	}
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
	 stru_t cli[] = {
		{"cd", dir_recu},
		{"env", curr_en},
		{"help", help_fnc},
		{"echo", bult_in},
		{"history", tm_func},
		{NULL, NULL}
	};
	int lp = 0;

	while ((cli + lp)->comm)
	{
		if (_strcmp(com[0], (cli + lp)->comm) == 0)
		{
			return ((cli + lp)->fptr(com, num));
		}
		lp++;
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
	{
		return (-1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		if (_strncmp(*cd, "./", 2) != 0 && _strncmp(*cd, "/", 1) != 0)
			path_r(cd);

		if (execve(*cd, cd, environ) == -1)
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

/**
 * _realloc -  Re-allocate block of Memory
 * @ptr: ptr
 * @old_size: old size
 * @new_size: New size
 * Return: Void funct
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		arr_func(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_size);
		free(ptr);
	}
	return (result);
}
