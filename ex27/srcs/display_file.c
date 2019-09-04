#include "header.h"

void	display_file(int file)
{
	char	*buf;

	while (read(file, &buf, 1) == 1)
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int	fd;
	
	if (argc != 2)
	{
		if (argc == 1)
			write(1, "File name missing.", 18);
		if (argc > 2)
			write(1, "Too many arguments.", 19);
		return (-1);
	}
	if ((fd = open(argv[1], O_RDONLY, 0)) == -1)
	{
		write(1, "Failed to open a file.", 22);
		return (-1);
	}
	display_file(fd);
	close(fd);
	return (0);
}

