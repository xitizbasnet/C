/*
Author : Xitiz Basnet
Subject : Programming Fundamentals

Lab Sheet NO : 9
Program : Write a C Program to increment or decrement
Date : December 2 , 2016
*/
#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  printf("The post increment is : %d\n",a++);
  printf("The pre increment is : %d\n",++a);
  printf("The post decrement is : %d\n",a--);
  printf("The pre decrement is : %d\n",--a);
  return 0;
}
