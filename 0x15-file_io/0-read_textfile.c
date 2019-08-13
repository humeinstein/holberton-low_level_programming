#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints to standard outpt
 * @filename: file
 * @letters: # of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int filepp;
	int fileop;
	char *space;

	if (filename == NULL)
	{
		return (0);
	}
	space = malloc((char) * letters);
	if (space == NULL)
	{
		free(space);
		return (0);
	}
	filepp = open(filename, O_RDONLY);
	fileop = read(filepp, space, letters);

	write(STDOUT_FILENO, space, fileop);

	free(space);
	close(filepp);
	return (fileop);
}
