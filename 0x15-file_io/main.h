#ifndef FILE_IO
#define FILE_IO

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters);





#endif
