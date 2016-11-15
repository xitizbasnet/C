/*
student name: xitiz basnet
subject: fundamentals of programming languages
roll no:28
program:write a c program to print name,address,age,gender,ask from user,5times using for loop.
lab no: 14
date:Nov15,2016
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char n[20],d[20],g[20];
int i,a;
printf("Enter your name(n):\n");
scanf("%s",&n);
printf("Enter your address(d):\n");
scanf("%s",&d);
printf("Enter your gender(g):\n");
scanf("%s",&g);
printf("Enter your age(a):\n");
scanf("%d",&a);
for(i=0;i<=5;i++)
{
    printf("Your name is %s\n",n);
    printf("Your address is %s\n",d);
    printf("Your age is %d\n",a);
    printf("Your gender is %s\n",n);
}
//return 0;
getch();
}
