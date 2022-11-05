#include "main.h"

/**
 * read_textfile - program reads a txt file and prints it to the stdout
 * @filename: to be read from
 * @letters: no. of letters to read and print
 * Return: reads a text file and prints it to the POSIX
 * stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w != r)
{
free(buffer);
return (0);
}
free(buffer);
close(o);

return (w);
}
