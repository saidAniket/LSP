#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int iRet=0;
    int Exit_Status=0;

    iRet=fork();
    if(iRet== 0)
    {
        wait(&Exit_Status);
        printf("child process is running \n");

        int iRet=0;
        iRet=fork();
        if(iRet == 0)
        {
            printf("child process 2 is running \n");

        }
        

    }
    return 0;
}