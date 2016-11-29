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
int n,a,x;
printf("Enter any number:\n");
scanf("%d",&n);
x=n%10;
printf("last number:%d\n",x);
while(n>0)
{
a=(n%10);
n/=10;
}
printf("first number:%d\n",a);
return 0;
}
