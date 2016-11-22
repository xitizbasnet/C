/*
Students Name: xitiz basnet
Roll No.:28
Lab No:16
Subject: Programming Fundmentals
Program:Write a program to find sum of First 'n' natural number. 
Date: Nov22,2016
*/
#include<stdio.h>
//#include<conio.h>
int main()
{
int num,i,sum=0;
printf("Find the sum of First 'n' natural number:\n");
printf("Enter the first number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum+=i;
printf("%d   ",sum);
}

printf("%d",sum);


//getch();
return 0;
}
