/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 16
Program : WAP to cbeck alphabet or not using ternary
Date : January 8 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
	char a;
	printf("Enter your character:\n");
	scanf("%c",&a);
	n=a;
	(n>=65&&n<=90||n>=97&&n<=122)?printf("The given input is a alphabet"):
    printf("The given input is not an alphabet");
    getch();
    return 0;
}
