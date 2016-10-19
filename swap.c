/*
student name: xitiz basnet
subject: fundamental of programming languages
roll no:
program: wrie a program to swap two number 
lab no:
date:oct19, 2016
*/

#include<stdio.h>
//#include<conio.h>

int main(){

int m,n,temp;

printf("Enter the first number(m): \n");
scanf("%d",&m);

printf("Enter the second number(n): \n");
scanf("%d",&n);

printf("Before swaping the number: \n");
printf("m=%d n=%d\n",m,n);

temp=n;
n=m;
m=temp;

printf("After swaping the number :\n");
printf("m=%d n=%d\n",m,n);


return (0);
}
