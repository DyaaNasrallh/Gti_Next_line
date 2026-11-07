#include "getopt.h"
#include<unistd.h>
#include<stdlib.h>
char *get_next_line(int fd)
{
    char *buf = malloc(100 * sizeof(char));
    read(fd,(char *)buf,BUFFER_SIZE);
    return buf;
}