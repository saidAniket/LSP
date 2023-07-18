
//write a program which accept file name from user and open that file.
// 14 july


#include<stdio.h>
#include<fcntl.h>

int main(int argc,char *argv[])
{
    int fd=0;
    char Fname[20];

    if(argc !=1)
    {
        printf("insufficient arguments\n");
        return 0;
    }

    printf("Enter the file name :\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("unble to open file \n");
        return -1;
    }
    else
    {
        printf("File is successfuly open with fd :%d\n",fd);
    }
}