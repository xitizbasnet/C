/*
student name:xitiz basnet
roll no:28
subject:programming fundamental
lab no:19
program: write a program to find first and last number.
* date:29th nov,2016
*/
#include<stdio.h>
int main()
{
int n,rem,sum=0;
printf("Enter any number:\n");
scanf("%d",&n);
while(n>0)
{
rem=(n%10);
sum=(sum+rem);
n=(n/10);
}
printf("sum of digits of bnumber:%d",sum);
return 0;
}
