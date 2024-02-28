#include "shell.h"

/**
 * tokenizerthecmd - tokenization of the command
 * @command: the command to tokenize
 * Return: pointer to pointer
 **/
char **tokenizerthecmd(char *command)
{
	int i = 0;
	char *token;
	char **tokens;

	tokens = malloc(20 * sizeof(char *));

	token = strtok(command, " ");
	while (token != NULL)
	{
		tokens[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}
	tokens[i] = NULL;

	return (tokens);
}
