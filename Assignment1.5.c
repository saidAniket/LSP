//write a program which accept file name and number of bytes from user and read 
//that number of bytes from file

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])

{
    int fd=0;
    char *Buffer=NULL;
    int iret=0;
    int isize=0;

    if(argc !=3)
    {
        printf("invalid argument\n");
        return -1;
    }

    fd=open(argv[1],O_RDONLY);
    if(fd== -1)
    {
        printf("unable to open file\n");
    }

    isize=atoi(argv[2]);
    Buffer=(char *)malloc(sizeof(atoi(argv[2])));

    iret=read(fd,Buffer,isize);
    if(read == 0)
    {
        printf("unable to read file \n");
        return -1;
    }
    
    printf("data from the file %s\n",Buffer);
    


    

    return 0;
}