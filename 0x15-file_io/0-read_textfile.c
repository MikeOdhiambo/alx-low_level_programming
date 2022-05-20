#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 *
 * @filename: Name of the file to read
 * @letters: Number of letters to read
 *
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, lineRead, lineWrite;

	if (!filename || !letters)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(char));
	if (!buff)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	lineRead = read(fd, buff, letters);
	if (lineRead < 0)
	{
		return (0);
	}
	lineWrite = write(STDOUT_FILENO, buff, lineRead);
	if (lineWrite < 0)
	{
		return (0);
	}
	close(fd);
	free(buff);

	return (linewWwrite);
}
