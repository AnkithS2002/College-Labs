#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
 struct stat statbuf;
 if(stat(argv[1],&statbuf)==-1){
 	printf("Couldn't Stat File");
 	exit(0);
 }
 printf("File : %s\n",argv[1]);
  printf("Inode Number : %ld\n",statbuf.st_ino);
   printf("UID : %d",statbuf.st_uid);
    printf("GID : %d\n",statbuf.st_gid);
   printf("Type and Permission : %o\n",statbuf.st_mode);
    printf("Number of Links : %ld\n",statbuf.st_nlink);
     printf("Size in Bytes : %ld\n",statbuf.st_size);
      printf("Blocks Allocated : %ld\n",statbuf.st_blocks);
      exit(0);
 
}
