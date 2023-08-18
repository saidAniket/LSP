#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void process1()
{
    int a=1;
    int b=2;
    int iRet=0;

    iRet=a+b;
    printf("Addition is %d\n",iRet);

}

void process2()
{
    int a=2;
    int b=2;
    int iRet=0;

    iRet=a*b;
    printf("Multiplication is %d\n",iRet);
}

void process3()
{
    int a=11;
    int b=2;
    int iRet=0;

    iRet=a-b;
    printf("Substraction is %d\n",iRet);
}

int main()
{
    int a=0;
    int b=4;
    int iCnt=0;

    for(iCnt=0;iCnt<=b;iCnt++)
    {
        if(iCnt == 1)
        {
            process1();
        }
        else if(iCnt == 2)
        {
            process2();
        }
        else if(iCnt == 3)
        {
            process3();
        }

        
    }


   return 0;
   
}