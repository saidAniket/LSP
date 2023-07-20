#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

#define Blocksize 1024
int main(int argc,char *argv[])
{
    char Buffer1[Blocksize]={'\0'};
    char Buffer2[Blocksize]={'\0'};
    char Fname1[20];
    char Fname2[20];

    int fd1=0;
    int fd2=0;

    int iRet1=0;
    int iRet2=0;

    printf("enter the file name \n");
    scanf("%s",Fname1);

    fd1=open(Fname1,O_RDONLY);
    if(fd1 != -1)
    {
        printf("file is sucessfully open \n");
    }

    printf("enter anather file name\n");
    scanf("%s",Fname2);

     fd2=open(Fname2,O_RDONLY);
    if(fd2 != -1)
    {
        printf("file is sucessfully open  \n");
    }

    iRet1=read(fd1,Buffer1,Blocksize);
    if(iRet1 != 0)
    {
        printf("file is sucessfuly read\n");

    }
    iRet2=read(fd2,Buffer2,Blocksize);
    if(iRet2 !=0)
    {
        printf("successfuly read \n");
    }

    while(())

    return 0;




    
    
}