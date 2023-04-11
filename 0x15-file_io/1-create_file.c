#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
*/
int create_file(const char *filename, char *text_content) {
if (filename == NULL)
return -1;
int thefile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (thefile == -1)
return -1;
if (text_content != NULL) {
ssize_t bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
return -1;
}
close(thefile);
return 1;
}
