#include "main.h"

/**
 * read_textfile - reads a text file and prints output.
 * @filename: name of the file to read.
 * @letters: number of letters it should read and print.
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *file;

	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
		return (0);
	file = malloc(letters * sizeof(char));
	if (!file)
		return (0);
	fread = read(fopen, file, letters);
	fwrite = write(STDOUT_FILENO, file, fread);

	free(file);
	close(fopen);
	return (fwrite);
}
