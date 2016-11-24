/*
student name:xitiz basnet
subject:programming fundamental
lab:17
semister:1st
program: showing last digit number
date:11/24/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a,x,d;
printf("Enter a number greater than 1:");
scanf("%d",&a);
x=(a%10);
printf("Your last number is:%d\n",x);
d=(a/10);
printf("Your number without last:%d\n",d);
return 0;
}
