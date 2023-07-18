#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc,char *argv[])
{
    int mode=0;

    if(argc !=3)
    {
        printf("insufficint argument\n");
        return -1;
    }


    if(strcmp(argv[2],"read") == 0)
    {
        mode=O_RDONLY;
    }
    else if(strcmp(argv[2],"Write")== 0)
    {
        mode=O_WRONLY;
    }
    else
    {
        mode=O_RDONLY;
    }

    if(access(argv[1],mode) < 0)
    {
        printf("unable to acess  %s file in %s  mode\n",argv[1],argv[2]);
    }
    else
    {
        printf("you can access %s file in %s mode \n",argv[1],argv[2]);
    }
    return 0;
}