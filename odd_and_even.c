/*
student name: xitiz basnet
subject:fundamentals of programminf languages
roll no:36
program: write a c program to generate first n even & odd terms and find their sum also,
lab no: 16
date:22 nov, 2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
int a,i,sum=0,sum1=0;
       printf("Enter the number(a):\n");
       scanf("%d",&a);
   
for(i=1;i<=a;i++) 
{     
    if(i%2==0)
    {
    
    sum+=i;
    printf("sum=%d\n",sum);
    }
    
    
}
printf("sum of the even number=%d\n",sum);

for(i=1;i<=a;i++) 
{     
    if(i%2!=0)
    {
    
    sum1+=i;
    printf("sum=%d\n",sum1);
    }
    
}
printf("sum of the odd number=%d",sum1);
return 0;
}
