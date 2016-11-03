/*
Students Name: xitiz basnet
Roll No.:36
Lab No:11
Subject: Programming Fundmentals
Program: swap number without using temporary variables or third variable
Date: nov3,2016
*/
#include<stdio.h>
int main(){
int f1,s2;
printf("Enter the first number(f1):");
scanf("%d",&f1);
printf("Enter the second number(s2):");
scanf("%d",&s2);
f1=f1-s2;
s2=f1+s2;
f1=s2-f1;
printf("f1=%d\n",f1);
printf("s2=%d",s2);
return 0;
}
