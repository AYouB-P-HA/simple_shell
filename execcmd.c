#include "shell.h"

/**
 * execcmd - executes the command
 * @tokens: argument of the command
 * Return: void
 **/
void execcmd(char **tokens)
{
	char *pathEnv = getenv("PATH");
	char *pathToken;
	char *path;

	pathToken = strtok(pathEnv, ":");
	while (pathToken != NULL)
	{
		path = malloc(strlen(tokens[0]) + strlen(pathToken) + 2);
		sprintf(path, "%s/%s", pathToken, tokens[0]);
		execve(path, tokens, NULL);

		pathToken = strtok(NULL, ":");
		free(path);
	}
}
