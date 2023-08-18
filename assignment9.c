#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>

int main(int argc,char *argv[])
{

    int iRet=0;

    iRet=fork();
    if(iRet == 0)
    {
        printf("child process running \n");
            char DirName[20];

            DIR *dp=NULL;
            struct dirent *entry=NULL;


            dp=opendir("/home/aniket/Desktop/assignment/ABC");
            if(dp== NULL)
            {
                printf("unable to open directory \n");
                return -1;
            }

            while((entry= readdir(dp)) !=NULL)
            {
                printf("%s\n",entry->d_name);
            }
    }
    else
    {
        printf("parent process is running \n");
    }



    return 0;
}