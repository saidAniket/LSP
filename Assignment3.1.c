#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

#define Blocksize 1024

int main(int argc,char *argv[])
{
    char Fname1[20];
    char Fname2[20];
    int fdSource=0;
    int fdDest=0;
    int iret=0;
    char Buffer[Blocksize]={'\0'};

    printf("enter the  source file name\n");
    scanf("%s",Fname1);

    fdSource=open(Fname1,O_RDONLY);
    if(fdSource != -1)
    {
        printf("sucessfuly file open\n");

    }
    printf("enter the destination file name\n");
    scanf("%s",Fname2);
    fdDest=creat(Fname2,0777);
    if(fdDest == -1)
    {
        printf("unable to create destinarion file\n");
        return -1;
    }

    while((iret=read(fdSource,Buffer,sizeof(Buffer))) !=0)
    {
        write(fdDest,Buffer,iret);
        memset(Buffer,0,sizeof(Buffer));
    }


}
