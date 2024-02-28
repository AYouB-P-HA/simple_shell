#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

char **tokenizerthecmd(char *command);
void execcmd(char **tokens);
void _Getline(char *buffer, size_t bufferSize);
void printENV(void);
void _exitshell(char *command);

#endif
