#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    struct stat sobj;
    int fd=0;


    if(argc !=2)
    {
        printf("insufficient argument\n");
        return -1;
    }

    fd=open(argv[1],O_RDONLY);
    stat(argv[1],&sobj);

    printf("information about file\n");

    printf("file nmae : %s\n",argv[1]);
    printf("inode number : %d\n",sobj.st_ino);
    printf(" mode        : %d\n",sobj.st_mode);
    printf("Linkcount   : %d\n",sobj.st_nlink);
    printf("block size  : %d\n",sobj.st_blksize);
    printf("block        : %d\n",sobj.st_blocks);




}