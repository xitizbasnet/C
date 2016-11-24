/*
student name:xitiz basnet
subject:programming fundamental
lab:17
semister:1st
program:ask user to enter divisor.
date:11/24/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,x,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter a divisor:");
scanf("%d",&d);
x=(a%d);
printf("Remainder=%d",x);
getch();
return 0;
}
