#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.>

int main(int argc,char *argv[])
{
    DIR *dp=NULL;
    struct dirent *entry=NULL;

    char Fname[20];

    printf("enter the file name\n");
    scanf("%s",Fname);

    dp=opendir(Fname);
    if(dp == NULL)
    {
        printf("unable to  open directory \n");
        return -1;
    }

    while((entry =readdir(dp)) != NULL)
    {
        printf("%s\n",entry->d_name);
    }

    return 0;
    

    

    
}