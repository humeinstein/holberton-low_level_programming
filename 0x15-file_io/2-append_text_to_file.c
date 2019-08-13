#include "holberton.h"
/**
 * _strlen - function
 *
 * @s: char s
 * Return: (length)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}



/**
 * append_text_to_file - function that appends text to end of file
 * @filename: filename ..
 * @text_content: content
 * Return: 1 on success -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filec;
	int x, y;

	if (filename == NULL)
		return (-1);

	filec = open(filename, O_WRONLY | O_APPEND);
	if (filec == -1)
	{
		close(filec);
		return (-1);
	}
	x = _strlen(text_content);
	y = write(filec, text_content, x);
	if (y < 1)
	{
		return (-1);
	}
	return (1);
}
