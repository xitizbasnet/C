/*
student name: xitiz basnet
subject: fundamentals of programming languages
roll no:36
program: write a program to print largest number.
lab no:05
date: oct 21, 2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){

int m,n,o;

printf("Enter the first value(m):\n");
scanf("%d",&m);

printf("Enter the second value(n):\n");
scanf("%d",&n);

printf("Enter the third value(o):\n");
scanf("%d",&o);

if(m>=n)
{
if (m>o)
printf("%d m is the greatest number:\n",m);
else
printf("%d is the greatest:\n",o);
}

else if(n>=m)
{ if (n>o)
printf("%d n is the greatest number:\n",n);

else
printf("%d is greatest number:\n",o);
}

return 0;
//getch();
}
