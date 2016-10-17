/* 
  student name:xitiz basnet
  subject: programming fundamentals
  roll no:
  program:write a program to print either number is positive, negative or zero.
  lab no:
  date:oct17,2016
 */
 
 #include<stdio.h>  
 
 
 int main(){
	 
	  int x;
	  
	  printf("Enter any number");
	  scanf("%d",&x);

	  
	  if(x>0)
	      {
		  printf("%d is a positive number",x);
		  }
		  
	  else if (x<0)
		  {
		   printf("%d is a negative number",x);	  
			  }
			  
     else
           {
		 printf("%d is a zero",x);
	       }
			  
		  
	 return (0);
  
  }
 

