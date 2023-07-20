#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc,char *argv[])
{   
    int iret=0;
    char Dirname[20];
    DIR *dp=NULL;
    struct dirent * entry=NULL;

    printf("enter the name of directory\n");
    scanf("%s",Dirname);

    dp=opendir(Dirname);
    if(dp == NULL)
    {
        printf("unable to open directory \n");
        return -1;
    }
    
    iret=mkdir(dp,O_RDONLY);
    if(iret== -1)
    {
        printf("unable to create directory \n");
        return -1;
    }
    {
        printf("sucessfuly created directory\n");
        return 0;
    }
}