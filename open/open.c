#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main() {
    int fd, size;
    char s[] = "Linux Programmer!\n", buffer[80];
    fd = open("/localrepo/yangshx/temp/temp.txt", O_WRONLY | O_CREAT);
    write(fd, s, sizeof(s));
    close(fd);
    fd = open("localrepo/yangshx/temp/temp.txt", O_RDONLY);
    size = read(fd, buffer, sizeof(buffer));
    close(fd);
    printf("%s", buffer);
}
