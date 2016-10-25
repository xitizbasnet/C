/*
Student Name:xitiz basnet
Subject:Programming Fundamentals
Roll No.: 36
Program: write a program to calculate sum,average,product,smallest and largest of the number.
Lab No.: 08
Date:oct 25,2016
*/

#include<stdio.h>
#include<conio.h>

int main()
	{
	int a,b,c,d,e,f,g,h,i;
	
	printf("\nEnter the first number(a):\n");
	scanf("%d",&a);
	printf("\nEnter the second number(b):\n");
	scanf("%d",&b);
	printf("\nEnter the third number(c):\n");
	scanf("%d",&c);
	
   d=(a+b+c);
   printf("\nAddition:\n");
   printf("%d + %d + %d = %d\n\n",a,b,c,d);
   
   e=((a+b+c)/3);
   printf("Average:\n");
   printf("%d + %d + %d = %d\n\n",a,b,c,e);
   
   f=(a*b*c);
   printf("Multiplication:\n");
   printf("%d * %d * %d = %d\n\n",a,b,c,f);
   
   if (a>=b && a>=c)
   {
      printf("\n%d is the largest number\n",a);
   }
   
   else if (b>=a && b>=c)
   {
	printf("\n%d is the largest number\n",b);
   }
   
   else
   {
	printf("\n%d is the largest number\n\n",c);
   }
   if (a<=b && a<=c)
   {
      printf("\n%d is the smallest number\n",a);
   }
   
   else if (b<=a && b<=c)
   {
	printf("\n%d is the smallest number\n",b);
   }
   
   else
   {
	printf("\n%d is the smallest number\n\n",c);
   }
    return 0;
	}