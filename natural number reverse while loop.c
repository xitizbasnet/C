/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 16
Program : WAP to display reverse natural number from n to 1 using while loop
Date : January 8 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d\t",n);
        n=n-1;
    }
    getch();
    return 0;
}
