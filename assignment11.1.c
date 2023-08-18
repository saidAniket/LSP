#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      // pthread_self();  get current id of thread;
#include<fcntl.h>
#include<pthread.h>

void * Threadproc1(void *ptr)
{   
    printf("first thread \n");
}
void * Threadproc2(void *ptr)
{   
    printf("2nd thread \n");
}
void * Threadproc3(void *ptr)
{   
    printf("3rd thread \n");
}
void * Threadproc4(void *ptr)
{   
    printf("4th thread \n");
}

int main()
{
    pthread_t TID1,TID2,TID3,TID4;

    int iRet1,iRet2,iRet3,iRet4=0;

    iRet1=pthread_create(&TID1,NULL,Threadproc1,NULL);
    if(iRet1 !=0)
    {
        printf(" unable o create thread \n");
        return -1;
    }

    iRet2=pthread_create(&TID2,NULL,Threadproc2,NULL);
    if(iRet2 !=0)
    {
        printf(" unable o create thread \n");
        return -1;
    }

    iRet3=pthread_create(&TID3,NULL,Threadproc3,NULL);
    if(iRet3 !=0)
    {
        printf(" unable o create thread \n");
        return -1;
    }

    iRet4=pthread_create(&TID4,NULL,Threadproc4,NULL);
    if(iRet4 !=0)
    {
        printf(" unable o create thread \n");
        return -1;
    }

    pthread_join(TID1,NULL);

    pthread_join(TID2,NULL);

    pthread_join(TID3,NULL);

    pthread_join(TID4,NULL);




    printf("end of the main thread \n");
    return 0;

}