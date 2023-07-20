#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

#define BLOCKSIZE 1024
int main(int argc,char *argv[])
{
    int fd=0;
    char Fname[20];
    char Buffer[BLOCKSIZE];
    int iret=0;

    printf("enter fule name \n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);
    if(fd== -1)
    {
        printf("unable to open file \n");
        return-1;
    }

    iret=read(fd,Buffer,BLOCKSIZE);
    if(iret == 0)
    {
        printf("unable to read file\n");
        return -1;
    }
    
    printf("data from file \n");
    write(1,Buffer,iret);





    return 0;




}