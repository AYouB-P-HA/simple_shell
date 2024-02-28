#include "shell.h"

/**
 * _exitshell - exit with error number
 * @command: command to free
 * Return: void
 **/
void _exitshell(char *command)
{
	free(command);
	exit(0);
}