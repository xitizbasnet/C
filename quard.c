/*
student name: xitiz basnet
subject:fundamentals of programminf languages
roll no:36
program: write a c program to find roots of quard eqn using if else.
lab no: 07
date:24 oct, 2016
*/

#include<stdio.h>
//#include<conio.h>
#include<math.h>

int main()
                 {
int a,b,c,dis,r1,r2;

                 printf("Program to sove Quardation Equation:\n");

                 printf("Enter the first number(a):\n");
                 scanf("%d",&a);

                 printf("Enter the second number(b):\n");
                 scanf("%d",&b);

                 printf("Enter the third number(c):\n");
                 scanf("%d",&c);

dis=((pow(b,2))-(4*a*c));
r1=((-b+sqrt(dis))/2*a);
r2=((-b-sqrt(dis))/2*a);



if(dis>0)
               {   
                printf("the value of discriminant is:%d\n\n",dis);    
                printf("the value of first x-intercept is:%d\n\n",r1); 
                printf("the value of second x-intercept is:%d\n\n",r2); 
               }
               
                

else  
                {
                printf("root imaginary");
                }
return 0;
                }



