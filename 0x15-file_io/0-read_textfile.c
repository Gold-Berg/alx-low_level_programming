#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t f;
ssize_t g;
ssize_t t;
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
t = read(f, buffer, letters);
g = write(STDOUT_FILENO, buffer, t);
free(buffer);
close(f);
return (g);
}
