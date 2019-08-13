#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints to standard outpt
 * @filename: file
 * @letters: # of letters to read and print
 * Return: # of bytes or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int filepp;
	int fileop;
	char *space;

	if (filename == NULL)
		return (0);
	if (letters == NULL)
		return (0);
	filepp = open(filename, O_RDONLY);
	if (filepp == -1)
		return (0);
	space = malloc(sizeof(char) * letters);
	if (space == NULL)
	{
		close(filepp);
		return (0);
	}
	fileop = read(filepp, space, letters);

	write(STDOUT_FILENO, space, fileop);

	free(space);
	close(filepp);
	return (fileop);
}
