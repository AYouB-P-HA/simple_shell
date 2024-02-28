#include "shell.h"

/**
 * printENV - prints the ENVirenmnt variables
 * Return: void
 **/
void printENV(void)
{
	char **ENV;
	unsigned int i;

	ENV = environ;
	i = 0;
	while (ENV[i] != NULL)
	{
		size_t len = strlen(ENV[i]);
		ssize_t bytes = write(1, ENV[i], len);

		if (bytes == -1)
		{
			perror("write");
			break;
		}

		bytes = write(1, "\n", 1);
		if (bytes == -1)
		{
			perror("write");
			break;
		}

		i++;
	}
}
