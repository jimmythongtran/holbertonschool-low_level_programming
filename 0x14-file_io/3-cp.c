#include "holberton.h"

int main(int argc, char *argv[])
{
	int fd_read, fd_write, store_read, store_write, close_return;
	char buffer[1204];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_read = open(argv[1], O_RDONLY);

	if (fd_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IREAD | S_IWRITE | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_write == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	store_read = read(fd_read, buffer, 1204);
	if (store_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	while (store_read != 0)
	{
		if (store_read > 0)
		{
			store_write = write(fd_write, buffer, (ssize_t) store_read);
			if (store_write == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
		store_read = read(fd_read, buffer, 1204);
		if (store_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit (98);
	}
	close_return = close(fd_read);
	if (close_return == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read), exit (100);
	close_return = close(fd_write);
	if (close_return == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write), exit (100);
	return (0);
}
