/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 18
Program :WAP print number pattern
              1
             12
            123
           1234
          12345
Date : January 15 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    for(i=1;i<=5;i++)
    {
        for(n=5;n>=i;n--)
        {
            printf(" ");

        }
        for(n=1;n<=i;n++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    getch();
    return 0;
}




