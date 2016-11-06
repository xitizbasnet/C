/*
Name: xitiz basnet
Subject programming fundamentals
Date:Nov6,2016
Program: write a program to check given long no is palindrome or not.
lab:12
*/

#include <stdio.h>
int main()

{
long long int x,y=0,r,z;
printf("Enter a first number(x):\n");
scanf("%lld",&x);

z=x;

while(x!=0)

{
r=x%10;
printf("value of r=%lld\n",r);
y=y*10+r;
printf("\nvalue of y=%lld\n",y);
x=x/10;
printf("value of x=%lld\n",x);
}

if(z==y)
{
printf("\n%lld is a palindrome",z);	
}
	
else
{
printf("\n%lld is not a palindrome",z);	
	}

return 0;
}
