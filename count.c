/*
student name:xitiz basnet
roll no:28
subject:programming fundamental
lab no:19
program: write a program to wap to count number of digits in any number.
* date:29th nov,2016
*/
#include<stdio.h>
int main()
{
int a,c=0;
printf("Enter any number:\n");
scanf("%d",&a);
while(a!=0)
{
a=(a/10);
c++;
}
printf("%d",c);
return 0;
}
