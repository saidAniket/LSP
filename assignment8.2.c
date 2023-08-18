#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int iRet=0;
    iRet=fork();
    int w=0;

    if(iRet== 0)
    {
        printf("child process  1 is runnig\n");
        printf("pid of child  process 1 %d\n",getpid());
        printf("ppid of parent process %d\n",getppid());

        printf("----------\n");

        

        int bRet=0;
        bRet=fork();
        if(bRet==0)
        {

            printf("child process  2 is runnig\n");
            printf("pid of child  process 2 %d\n",getpid());
            printf("ppid of parent process 2 %d\n",getppid());

            printf("--------------\n");

            int cRet=0;
            cRet=fork();

            if(cRet== 0)
            {
                 printf("child process  3 is runnig\n");
                printf("pid of child  process 3 %d\n",getpid());
                printf("ppid of parent process 2 %d\n",getppid());

            }
            else
            {
                printf("parent process of 3 child is running \n");
                printf("pid of parent   process 2 %d\n",getpid());


            }
        }
        else
        {   
            printf("parent process of 2 child is running \n");
            printf("pid of parent   process 1 %d\n",getpid());

        }
    }    
    else
    {   w=wait(&w);
        printf("parent  process 1 is runnig\n");
        printf("pid of parent process %d\n",getpid());


    }

    return 0;
}