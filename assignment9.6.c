#include<stdio.h>
#include<stdlib.h>

int main()
{
     extern char **environ;
    int i=0;

    for(i=0;environ[i] != NULL;i++)
    {
        printf("%s\n",environ[i]);
    }
    return 0;
}