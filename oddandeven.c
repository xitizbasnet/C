/*
student name: xitiz basnet
subject:fundamentals of programminf languages
roll no:36
program: write a c program to take two i/p from user and print odd and even nos. using terinary operator.
lab no: 07
date:24 oct, 2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
int a;
       printf("Enter the first number(a):\n");
                 scanf("%d",&a);


(a%2==0) ? printf("%d is even",a): printf("%d is odd",a);
return 0;
}

