#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int iRet=0;
    int cpid=0;
    int Exit_Status=0;


    iRet=fork();
    if(iRet == 0)
    {
        printf("child process is running \n");
        execl("./childprocess","NULL","NULL");
        
        int a=0;int iRet=0;
        int b=0;

        printf("enter the number \n");
        scanf("%d",&a);

        printf("enter the number \n");
        scanf("%d",&b);

        iRet=a+b;
        printf("Addition of A+b is %d\n",iRet);



    }
    else
    {
        cpid=wait(&Exit_Status);
        printf("parent process is running \n");
        
         int a=0;int iRet=0;
        int b=0;

        printf("enter the number \n");
        scanf("%d",&a);

        printf("enter the number \n");
        scanf("%d",&b);

        iRet=a+b;
        printf("Addition of A+b is %d\n",iRet);


         


        printf("child process terminated having pid %d\n",cpid,Exit_Status);
    }
    return 0;
}