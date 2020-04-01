#include "holberton.h"
/**
 *main - entry point.
 *@argc: number of argument
 *@argv: character value an array of pointers to the strings.
 *
 *Return: 0 if success.
 */
int main(int argc, char **argv)
{
	char buf[1024];
	int fr, f1, f2;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fr = read(f1, buf, 1024);
	while (fr > 0)
	{
		if (write(f2, buf, fr) != fr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		fr = read(f1, buf, 1024);
	}
	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f2))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	if (close(f1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	return (0);
}
