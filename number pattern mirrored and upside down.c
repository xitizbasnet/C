/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 18
Program :WAP print number pattern
         12345
          2345
           345
            45
             5
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
                printf("%d",n);
        }
        printf("\n");
    }
    getch();
    return 0;
}





