#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int iRet=0;

    iRet=nice(0);
    printf("current priority of process is %d\n",iRet);

    iRet=nice(10);
    printf("increase   priority of process is %d\n",iRet);

    return 0;
}