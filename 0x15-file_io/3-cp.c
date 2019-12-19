#include "holberton.h"

/**
 * main - copy the file
 *
 * @argc: input number of arguments
 * @argv: input pointer to strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
  int check, file1, file2;
  char buf[1024];

  if (argc != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }
  file1 = open(argv[1], O_RDONLY);
  if (file1 == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
      exit(98);
    }
  file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
  if (file2 == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
      exit(99);
    }
  while ((check = read(file1, buf, 1024)) > 0)
    {
      if (check == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	  exit(98);
	}
      check = write(file2, buf, check);
      if (check == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	  exit(99);
	}
    }
  if (check == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
      exit(98);
    }
  if (close(file1) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
      exit(100);
    }
  if (close(fd2) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
      exit(100);
    }
  return (0);
}
