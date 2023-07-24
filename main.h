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

extern char **environ;

#define PUTCHAR(c) (write(STDOUT_FILENO, c, _strlen(c)))
#define BUFFERSIZE 1024
#define DELIM " \t\r\n\a"
/**
 * struct sys - struct
 * @comm: pointer
 * @fptr: functin pointer
 */
typedef struct sys
{
	char *comm;
	int (*fptr)(char **ln, int n);
} stru_t;

/* DANIMOH SYSTEM FILE */
void rnthru_fl(char *file, char **env);
void sk_out_file(char **cd, char *ln, FILE *ptr);
void handle(int s);
void out_sys(char **cm, char *input, char **arrfl, int i);
int help_fnc(char **cd, int num);
int path_r(char **cdln);
char *_envro(char *dm);
int tm_fc(char *pt);
int echo_com(char **command);
char **run_c(char *inp);
void fre_sys(char **input, char *line);
int curr_en(char **cd, int num);

/* Chinenye Normal run fubction */
void _puts(char *filename);
int _putchar(char c);
int intlen(int n);
int _atoi(char *str);
char *_strcat(char *destfile, char *srcfile);
char *_strchr(char *str, char ch);
char _strcmp(char *s1, char *s2);
unsigned int delim(char c, const char *str);
char *_strtok(char *str, const char *fil);
char *_memcpy(char *dest, char *src, unsigned int n);

/* DANIMOH STRING FUNCTION */
int _strlen(char *filename);
char *_strcpy(char *destfile, char *srcfile);
char *_strncpy(char *destfile, char *srcfile, int m);
int _strncmp(const char *file1, const char *file2, size_t num);
int _isalpha(int c);
void array_rev(char *arr, int len);
char *_itoa(unsigned int n);
char *_new_ln(void);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void shell_prompt(void);
void cal_num(unsigned int num);
void error_r(char *input, int num, char **arr);
int bult_in(char **cd, int str);

/* Chinenye Dir function */
void oprate_fl(char *ab, int ac, FILE *ptr, char **arg);
int sys_fl(char **com, int num);
int run_dr(char **cd, char *filename, int i, char **arrfl);
int dir_recu(char **str, int num);
char *crea_pat(char *ccs, char *access);
void tags(char *b);
void free_all(char **command, char *ln);
int tm_func(char **str, int i);
void *arr_func(void *a, int b, unsigned int c);
void *_calloc(unsigned int size);
void _print_er(char **ac, int i, char **cd);
void cal_in_num(int num);
int rn_sys_fl(char **shel);
char *_strdup(char *str);
void environment(char **sh);
#endif
