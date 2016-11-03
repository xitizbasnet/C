/*
Students Name: xitiz basnet
Roll No.:36
Lab No:11
Subject: Programming Fundmentals
Program: write a c program to check, entered no is prime or not
Date: nov3,2016
*/
#include<stdio.h>
int main(){
int x,i,count=0;

printf("Enter the first number(x):");
scanf("%d",&x);

for(i=1;i<=x;i++)
{
if (x%1==0)
{
count++;
}
}
if (count>2){
printf("%d is not a prime number",x);
}
	
else
{
printf("%d is a prime number",x);	
}
return 0;
}
