#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>

#define HANDLER(c) (write(STDOUT_FILENO, c, _strlen(c)))

/**
 * struct sys - struct
 * @comm: pointer
 * @fptr: functin pointer
 */
typedef struct sys
{
	char *comm;

	int (fptr)(char **ln, int n);
} stru_t;

extern char **ent;

/* DANIMOH SYSTEM FILE */
void rnthru_fl(char *file, char **env);
void sk_out_file(char **cd, char *ln, FILE *ptr);
void handle(int s);

/* Chinenye Normal run fubction */
void _puts(char *filename);
int _putchar(char c);
int intlen(int n);
int _atoi(char *str);
char *_strcat(char *destfile, char *srcfile);
char *_strchr(char *str, char ch);
char _strcmp(char *s1, char *s2);

/* DANIMOH STRING FUNCTION */
int _strlen(char *filename);
char *_strcpy(char *destfile, char *srcfile);
char *_strncpy(char *destfile, char *srcfile, int m);
int intlen(int n);
int _strncmp(const char *file1, const char *file2, size_t num);
int _isalpha(int c);
void array_rev(char *arr, int len);
char *_itoa(unsigned int n);

/* Chinenye Dir function */
void oprate_fl(char *ab, int ac, FILE *ptr, char **arg);
int sys_fl(char **com, int num);
int run_dr(char **cd, char *filename, int i, char **arrfl);

#endif
