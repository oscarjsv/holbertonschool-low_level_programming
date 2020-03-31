#include "holberton.h"
/**
 * read_textfile - read a text file and prints
 * it to the POSIX standard output.
 * @filename: name of the file
 * @letters: size of the letters
 * Return: write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t f1, w;
	/*libero memoria */
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		return (0);
	}
	/*abro mi archivo con permisos de lectura*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/*aca paso los parametros que voy a leer*/
	f1 = read(fd, c, letters);
	if (f1 == -1)
	{
		return (0);
	}
	/*imprimo con el while lo que lei*/
	w = write(STDOUT_FILENO, c, f1);
	if (w == -1)
	{
		return (0);
	}
	close(fd);

	return (w);
}
