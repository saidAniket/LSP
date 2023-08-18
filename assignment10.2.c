#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void *Threadproc1(void *ptr)
{              
              int i=0;
              for(i=1;i<50;i++)
              {
                printf("%d\t",i);

              }

              printf("theread 1 complete \n");
                printf("\n");

              printf("\n");

              printf("\n");


}

void *Threadproc2(void *ptr)
{ 
                
              for(int i=50;i>0;i--)
              {
                printf("%d\t",i);

              }

              printf("theread 2 complete \n");
              printf("\n");
                printf("\n");

              printf("\n");

             
              


}

int main()
{
    pthread_t TID1,TID2;

    int iRet1,iRet2=0;

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


    pthread_join(TID1,NULL);

    pthread_join(TID2,NULL);


   
    return 0;

}