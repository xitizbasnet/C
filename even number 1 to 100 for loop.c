/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 17
Program :WAP to print even number from 1 to 100
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    getch();
    return 0;
}
