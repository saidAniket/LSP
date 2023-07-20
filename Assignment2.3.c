#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc,char *argv[])
{
    DIR *dp=NULL;
    struct dirent *entry=NULL;

    if(argc !=2)
    {
        printf("invalid argument \n");
        return -1;
    }

    dp=opendir(argv[1]);
    if(dp == NULL)
    {
        printf("unable to open directory \n");
        return -1;
    }

    while((entry = readdir(dp)) != NULL)
    {
        printf("%s\n",entry->d_name);
    }

    closedir(dp);





    
}