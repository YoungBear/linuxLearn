#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char * argv[])
{
    char *filename;
    struct stat buf;

    if(argc != 2) {
        printf("Please input filename\n");
        exit(-1);
    }
    filename = argv[1];
    if(stat(filename, &buf) < 0) {
        printf("Mesg: %s\n", strerror(errno));
        exit(-1);
    }
    printf("%s's size iss %-4d bytes\n",filename, buf.st_size);
    printf("%s's t_blksize is %-4d bytes\n", filename, buf.st_blksize);
    printf("%s's blocks is %-4d blocks\n", filename, buf.st_blocks);
}
