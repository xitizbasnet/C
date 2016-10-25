/*
Student Name:xitiz basnet
Subject:Programming Fundamentals
Roll No.: 36
Program: write a program to calculate sum of integer number.
Lab No.: 08
Date:oct 25,2016
*/

#include<stdio.h>
#include<conio.h>

int main()
	{
		int n,sum=0;
		
		printf("Enter a positive integer\n");
        scanf("%d",&n);
  
        do
        {
        	sum+=n; //sum=n+n......
        	n--;
        	
        }
        while(n>0);
        printf("Sum=%d\n",sum);
        //getch();
        
		return 0;
      	}