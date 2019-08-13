#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: as name
 * Return: -1 if fail 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int filec;
	int x, y;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	filec = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (filec == -1)
	{
		close(filec);
		return (-1);
	}
	x = sizeof((char) * text_content);
	y = write(filec, text_content, x);
	if (y < 1)
	{
		return (-1);
	}
	return (1);
}
