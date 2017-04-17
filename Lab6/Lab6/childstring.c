#include<stdio.h>
#include<string.h>
int main( int argc, char *argv[] )
{
char t[20];
int f;
int i,j,k;
f=fork();
if(f==0)
{
 printf("\nChild Process\n");
 for(i=1; i<argc; i++) 
 { 
  for (j=1; j<argc; j++)  
  {
   if (strcmp(argv[j-1], argv[j]) > 0) 
   {
    strcpy(t, argv[j-1]);
    strcpy(argv[j-1], argv[j]);
    strcpy(argv[j], t);   
   }
  } 
 }
printf("Sorted Strings\n");
for (j=1; j<argc; j++)  
{
printf("%s\n", argv[j]); 
} 
}
else
{
wait(0);
printf("\nParent Process\n");
printf("Original Strings\n");
for(i=1; i<argc; i++) 
{ 
printf("String %d is: %s\n", i, argv[i]); 
}
}
return 0;
}

/*Child Process
Sorted Strings
abc
fgh
lmn
rst
xyz

Parent Process
Original Strings
String 1 is: abc
String 2 is: fgh
String 3 is: xyz
String 4 is: rst
String 5 is: lmn
*/
