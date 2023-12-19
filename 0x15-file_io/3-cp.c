#include "main.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */


int main(int argc, char *argv[])
{
	int from = 0, to = 0;
	char buffer[1024];
	ssize_t b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
        {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
        }
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
        {
	        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	        exit(99);
        }
	while ((b = read(from, buffer, 1024)) > 0)
		if (write(to, buffer, b) != b)
		{
	        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	if (b == -1)
	{
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	from = close(from);
	to = close(to);
	if (from)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (to)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
