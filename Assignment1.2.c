
// write a progem 
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char Fname[20];
    int fd=0;
    int mode=0;

    if(argc !=1)
    {
        printf("insufficient argument\n");
    }

    printf("enter the file name \n");
    scanf("%s",Fname);

    if(strcmp(Fname,"Read") == 0)
    {
        mode= O_RDONLY;
    }
    else if(strcmp(Fname,"Write")== 0)
    {
        mode=O_WRONLY;
    }
    else 
    {
        mode=O_RDONLY;
    }

    fd=open(Fname,mode);
    if(fd == -1)
    {
        printf("unable to open file \n");
        return -1;
    }
    else
    {
        printf("file is open sucessfully with fd :%d\n",fd);
    }
    

    
    return 0;
}