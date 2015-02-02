#include <unistd.h>
#include <stdio.h>
void main()
{
    if(access("/localrepo/yangshx/temp",R_OK) == 0)
    {
        printf("/localrepo/yangshx/temp does not exist. \n");
    }
}
