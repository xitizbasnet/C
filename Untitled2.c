/*
student name: xitiz basnet
subject: programming fundamentals
roll no:
program: write a program to read three side of triangle to calculate area.
lab no:01
date:sep28,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

float a,s,b,c,d,area;

printf("enter the first side");
scanf("%f",&a);

printf("enter the second side");
scanf("%f",&b);

printf("enter the third side");
scanf("%f",&c);

s=(a+b+c)/2;
printf("\nsum : %f",s);
area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
printf("\narea: %f",area);


getch();
	}
