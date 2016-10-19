/*
 student name: xitiz basnet
 subject: fundamentals of programming languages
 roll no:
 semister: 1st sem
 program: write a program to find out whether the given date is leap year or not?
 lab no:03
 date: 19oct,2016
 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main(){
	 
	 int d;
	 
	 printf("Enter the last date of feb:\n");
	 scanf("%d",&d);
	 
	 if(d==28)
	 {
	    printf("The year is not a leap year\n");
	  }  
	  
	    else if(d==29)
	    {
	    printf("The year is a leap year");
	}
	else
	{
		printf("Invalid date");
	}
	 
	  return 0;
	 //getch();
	 }
