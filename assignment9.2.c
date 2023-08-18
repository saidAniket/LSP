#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>
#include<fcntl.h>

int main(int argc,char *argv[])
{

       char DirName[20];

            DIR *dp=NULL;
            struct dirent *entry=NULL;


            dp=opendir("/home/aniket/Desktop/assignment/Count");
            if(dp != NULL)
            {
                printf("sucessfully  to open directory \n");
            
            }
  

             int iRet=0;

            iRet=fork();
            if(iRet== 0)
            {
                int fd=open("demo.txt",O_RDONLY);
                if(fd != -1)
                {
                    printf("sucessfully  to oepn file demo .txt \n");
                }

                char Buffer[512];
                int iCnt=0;
                int iRet=0;int i=0;

                while((iRet= read(fd,Buffer,sizeof(Buffer))) !=0)
                {
                    for(i=0;i<iRet;i++)
                    {
                        if((Buffer[i] >='A') && (Buffer[i] <= 'Z'))
                        {
                            iCnt++;
                        }
                    }
                }

                printf("Number of capital character are %d\n",iCnt);


            }

            int iRet1=0;
            if(iRet1 ==0)
            {
                int fd=open("hello.txt",O_RDONLY);
                if(fd != -1)
                {
                    printf("sucessfully  to oepn file hello.txt \n");
                }

                char Buffer[512];
                int iCnt=0;
                int iRet=0;int i=0;

                while((iRet= read(fd,Buffer,sizeof(Buffer))) !=0)
                {
                    for(i=0;i<iRet;i++)
                    {
                        if((Buffer[i] >='A') && (Buffer[i] <= 'Z'))
                        {
                            iCnt++;
                        }
                    }
                }

                printf("Number of capital character are %d\n",iCnt);


            }
            


    
    
   

    return 0;
}