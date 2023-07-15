#ifndef MAIN_H
#define MAIN_H

/* LIBRARY */

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

typedef struct  comman
{
        char *commands;
        int (*f)(char **line, int er);
} struc_t;

/* SHELL FUNCT */

void rn_fini(char **file, char *sp);
void search_for(void);
char *linebase(void);
void command_call(int i);
char **command_search(char *ld);
void collect_args(char *file, char **pas);
int for_system(char **ld);
int ck_rn_sys(char **ar, int h);
int rn_search(char **sr, char *g, int num, char **arg);
int records(char *filename);
void funct_quit(char **ind, char *filename, char **arg, int lp);

/* ALL FUNCTION DECLARED FOR STRING INCLUDING ALX _PUTCHAR */

int stringcompare(char *str1, char *str2);
char *_stringfunc_one(char *string, const char *to4ken);
unsigned int stringfunc_two(char cha, const char *string);

#endif
