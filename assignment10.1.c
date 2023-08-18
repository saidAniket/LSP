#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * Threadproc(void *ptr)
{
    int i=0;
    for(i=1;i<100;i++)
    {
        printf(" thread with counter %d\n",i);
    }

}

int main()
{
    pthread_t TID;

    int iRet=0;

    iRet=pthread_create(&TID,NULL,Threadproc,NULL);
    if(iRet !=0)
    {
        printf(" unable o create thread \n");
        return -1;
    }

    printf("thread is created  with id  %d\n",TID);

    printf("end of the main thread \n");
    return 0;

}