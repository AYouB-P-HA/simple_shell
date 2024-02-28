#include "shell.h"

/**
 * __exitshell - exit with error number
 * @command: command to free
 * Return: void
 **/
void __exitshell(char *command)
{
	free(command);
	exit(0);
}
