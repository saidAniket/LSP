#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
    struct stat sobj;

    if(argc !=2)
    {
        printf("insufficient argument\n");
        return -1;
    }

    stat(argv[1],&sobj);

    if(S_ISREG(sobj.st_mode))
    {
        printf("is regular file \n");
    }
    else if(S_ISDIR(sobj.st_mode))
    {
        printf("it is symbolic link\n");
    }
    else if(S_ISLNK(sobj.st_mode))
    {
        printf('it is symbolic link\n');
    }

    return 0;

}