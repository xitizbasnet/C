/*
student name: xitiz basnet
subject: fundamentals of programming languages
roll no:
program:write a c program to use bitwise operator.
lab no:
date: 19oct, 2016
*/

#include<stdio.h>
//#include<conio.h>

int main() {
int x,y;

printf("Enter the first number(x): \n");
scanf("%d",&x);

printf("Enter the second number(y): \n");
scanf("%d",&y);

printf("use of '&' operator:\n");
printf("%d&%d=%d \n",x,y,x&y);

printf("use of '|' operator:\n");
printf("%d|%d =%d \n",x,y,x|y);

printf("use of '~' operator: \n");
printf("%d~=%d \n",x,~x);
printf("%d~=%d \n",y,~y);

printf("use of '^' operator:\n");
printf("%d^%d=%d",x,y,x^y);

return 0;
}
