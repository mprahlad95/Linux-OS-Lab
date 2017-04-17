#include<stdio.h>
#include <unistd.h>
int main()
{
 int i;
 i=fork();
 if(i==0)
 {
  printf("Child Process \n");
  execl("/bin/date","date", (char *)0);
 }
 else
 {
  wait(0);
  printf("\n");
  printf("Parent Process\n");
 }
 return 0;
}

//Child Process 
//Wed Sep  9 09:27:08 IST 2015

//Parent Process

