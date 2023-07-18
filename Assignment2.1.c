
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    int fd=0;
    int iret=0;

    if(argc !=2)
    {
        printf("invalid arguments \n");
        return -1;
    }

    fd=open(argv[1],O_RDONLY);
    if(fd== -1)
    {
        printf("unable to open file \n");
        return -1;
    }

    iret=creat(argv[1],0777);
    if(iret == -1)
    {
        printf("unable to read file \n");
    }
    else
    {
        printf("file newly gets created\n");
    }

    return 0;

    
}