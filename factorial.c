/*
student name: xitiz basnet
subject:fundamental of programming languages.
roll no: 36
program: write a c programto print factorial of any  no provided by user using while loop.
lab no:09
date: oct26,2016
*/
#include<stdio.h>
//#incude<conio.h>

int main()
{
      int x,fact=1,i;

    printf("Enter the number(x):");
    scanf("%d",&x);
    i=1;

do
{
    fact*=i;
   
    i++;
    printf("\nfactorial number is:%d\n",fact);
     
}
while(i<=x);


    
		
return 0;
//getch();
}
