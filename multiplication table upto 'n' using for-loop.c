/*student Name: Xitiz Basnet
subject: Programming fundamentals
roll no: 26
program: Program to display multiplication table upto 'n' using for-loop:
lab no: 24
BCS Sem= 1st
date: 1/5/2016
*/
#include<stdio.h>
int main()
{
 int x,i,j,mul;
 printf("Enter the number to be multiplied:\n");
 scanf("%d",&x);
  for(i=1;i<=x;i++)
  {
  //printf("%d\t",i);
  for(j=1;j<=10;j++)
  {
      mul=(i*j);
      printf("%d\t",mul);
  }
  printf("\n");
  }
    return 0;
}
