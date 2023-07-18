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

/* Chinenye Normal run fubction */
void _puts(char *filename);
int _putchar(char c);
int _atoi(char *str);
char *_strcat(char *destfile, char *srcfile);
char *_strchr(char *str, char ch);
char _strcmp(char *s1, char *s2);

/* DANIMOH STRING FUNCTION */
int _strlen(char *filename);
char *_strcpy(char *destfile, char *srcfile);
char *_strncpy(char *destfile, char *srcfile, int m);
int _strncmp(const char *file1, const char *file2, size_t num);
