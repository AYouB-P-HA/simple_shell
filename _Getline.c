#include "shell.h"

/**
 * _Getline - takes input from STDIN
 * @buffer: stores the input
 * @bufferSize: the size of buffer
 * Return: void
 **/
void _Getline(char *buffer, size_t bufferSize)
{
	int bytes;

	bytes = read(STDIN_FILENO, buffer, bufferSize);
	if (bytes == -1)
		perror("hsh");
	else
		buffer[strcspn(buffer, "\n")] = '\0';
}
