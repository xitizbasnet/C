/*
 student name: xitiz basnet
 subject: fundamentals of programming languages
 roll no:36
 BCS semister: 1st 
 program:Write a c programto use of Assignment Operator.
 lab no:04
 date: 20oct,2016
 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main(){
	 
	 int x,y;
	 
	printf("Enter the first number: \n");
	scanf("%d",&x);
	
	printf("Enter the second number: \n");
	scanf("%d",&y);
	
	x=y;
	printf("use of '=' operartor: %d\n",x);
	
	 x+=y;
	printf("use of '+=' operator: %d\n",x);
	
	x-=y;
	printf("use of '-=' operator: %d\n",x);
	
	x*=y;
	printf("use of '*=' operator: %d\n",x);

	x/=y;
	printf("use of '/=' operator: %d\n",x);
	
	x%=y;
	printf("use of '%%=' operator: %d\n",x);
	
	
	  return 0;
	 //getch();
	 }
