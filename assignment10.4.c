#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      // pthread_self();  get current id of thread;
#include<fcntl.h>
#include<pthread.h>

void * Threadproc(void *ptr)
{
    pthread_t id=pthread_self();
    printf("thread id inside thred function  with id  %d\n",id);
    

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