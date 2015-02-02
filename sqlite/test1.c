#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sqlite3.h>

int main()
{
    sqlite3* db = NULL;
    printf("start...");
    if( sqlite3_open( "aplogd.db", &db ) == SQLITE_OK && db!=NULL)
    {
        printf("created successful...");
    } else {
        printf("create failed...");
    }
    
    printf("end...");
    return 0;
}
