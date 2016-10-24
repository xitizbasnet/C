/*
student name: xitiz basnet
subject:fundamentals of programminf languages
roll no:36
program: write a c program to take two i/p from user and print largest and smallest nos. using terinary operator.
lab no: 07
date:24 oct, 2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
int a,b,x;
                 printf("Enter the first number(a):\n");
                 scanf("%d",&a);

                 printf("Enter the second number(b):\n");
                 scanf("%d",&b);

                 printf("Enter the third number(x):\n");
                 scanf("%d",&x);

(a>b && a>x) ? printf("a is the largest number") : (b>a && b>x) ? printf("b is the largest number") :printf("x is the largest number");

return 0;
}
