#include<stdio.h>
#include<fcnlt.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>

//write aprogram which accept directoris name from user and delete all empty file

int main(int argc,char *argv[])
{
    char Dirname[20];
    DIR *dp=NULL;

    struct dirent *entry=NULL;
    char name[20];

    struct stat obj;

    printf("enter the name of directory \n");
    scanf("%s",Dirname);

    dp=opendir(Dirname);
    if(dp == NULL)
    {
        printf("unable to open directory\n");
        return -1;
    }    

    while((entry=readdir(dp)) !=NULL)
    {
        sprintf(name,"%s/%s",Dirname,entry->d_name);
        stat(name,&obj);
        if(S_ISREG(obj.st_mode))
        {
            if(obj.st_size=0)
            {
                remove(name);
            }
        }
    }

}