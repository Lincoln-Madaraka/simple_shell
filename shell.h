#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>


int shell_ctrld(char **args);
int shell_cd(char **args);
int shell_help(char **args);
extern char **environ;
int shell_exit(char **argv);
int _strcmp(char *s1, char *s2);
size_t _strncmp(char *s1, char *s2, size_t n);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _putchar(char c);
char *_getline(void);
char *get_input(void);
int trace_nwln(char *buffer, int size);
char *copy_ln(char *buffer, int len, char *line);
void shift_buffr(char *buffer, int size, int pos);

char *trace_path(char **env);
int val_path(char **arg, char **env);
void trial(void);
char *_getln(void);
char *read_ln(void);
void _getenv(char **env);
char **tokenize(char *lptr);
void _exit_command(char **args, char *lineptr, int _exit);
int _fork(char **argc, char **argv, char **env,
char *lineptr, int np, int c);
int _setenv(char **args);
int _unsetenv(char **args);
void handle_setenv_command(char **args);
void handle_unsetenv_command(char **args);


#endif  /* SHELL_H */

