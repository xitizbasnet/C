/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 18
Program :WAP print star pattern
         *****
          ****
           ***
            **
             *
Date : January 15 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    for(i=1;i<=5;i++)
    {
        for(n=1;n<=5;n++)
        {
        if(n<i)
            printf(" ");
        else
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}




