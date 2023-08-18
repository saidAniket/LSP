#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void *Threadproc1(void *ptr)
{              
    int iValue=*(int *)ptr;
    printf("%d\n",iValue);


}


int main()
{
    pthread_t TID1,TID2;

    int iRet1,iRet2=0;
    int iNo=4;

    iRet1=pthread_create(&TID1,NULL,Threadproc1,(void *)&iNo);
    if(iRet1 !=0)
    {
        printf(" unable o create thread \n");
        return -1;
    }

    pthread_join(TID1,NULL);
}