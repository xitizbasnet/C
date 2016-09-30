/*
student name: xitiz basnet
subject: programming fundamental
roll no:
program: write a program toenter the student name and percentage of 7 subject score by him/her.
lab no:06
date:sep30,2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	char name[20];
	float a1,a2,a3,a4,a5,a6,a7,total,per;
	
	printf("\n enter the student name: ");
	scanf("%s",name);
	
	printf("\n enter the marks of science: ");
	scanf("%f",&a1);
	
	printf("\n enter the marks of computer: ");
	scanf("%f",&a2);
	
	printf("\n enter the marks of math: ");
	scanf("%f",&a3);
	
	printf("\n enter the marks of management: ");
	scanf("%f",&a4);
	
	printf("\n enter the marks of agriculture: ");
	scanf("%f",&a5);
	
	printf("\n enter the marks of program: ");
	scanf("%f",&a6);
	
	printf("\n enter the marks of software: ");
	scanf("%f",&a7);
	
	total=(a1+a2+a3+a4+a5+a6+a7);
	printf("\n enter the total %f",total);
	        
	per=(total/7);
	printf("\n enter the percentage %f",per);
	
	getch();
	
	return(0);
	    }