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
int sd, fr, prnt;
char *c = (char *)malloc(sizeof(char) * letters);

if (filename == NULL)
return (0);

sd = open(filename, O_RDONLY);

if (sd < 0)
return (0);

if (c == NULL)
return (0);

fr = read(fd, c, letters);
prnt = write(STDOUT_FILENO, c, fr);

close(sd);
free(c);

return (prnt);
}
