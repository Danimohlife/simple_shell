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

/* ALL FUNCTION DECLARED FOR STRING INCLUDING ALX _PUTCHAR */

char *_stringfunc_one(char *string, const char *to4ken);
unsigned int stringfunc_two(char cha, const char *string);

#endif
