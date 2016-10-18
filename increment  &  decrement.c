/*
student name: xitiz Basnet
subject: fundamentals of programming languages
roll no:
program: Arthimetic Operator
lab no:
date: oct18,2016
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	
int x,y,sum,sub,mul,div,mod,v;

printf("Enter the first number: \n");
scanf("%d",&x);

printf("Enter the second number: \n");
scanf("%d",&y);


sum=(x+y);
printf("use of '+' operator: \n");
printf("%d + %d = %d\n",x,y,sum);

sub=(x-y);
printf("use of '-' operator: \n");
printf("%d - %d = %d\n",x,y,sub);

mul=(x*y);
printf("use of '*' operator: \n");
printf("%d * %d = %d\n",x,y,mul);

div=(x/y);
printf("use of '/' operator: \n");
printf("%d / %d = %d\n",x,y,div);

mod=(x%y);
printf("use of '%%' operator: \n");
printf("%d %% %d = %d\n",x,y,mod);

printf("Enter the v integer value: \n");
scanf("%d",&v);

printf("\n original value of v is %d\n",v);
printf("the post-fix increment(v++) is %d \n",v++);
printf("the pre-fix increment(++v) is %d \n",++v);

printf("\n original value of v is %d\n",v);
printf("the post-fix increment(v--) is %d \n",v--);
printf("the pre-fix increment(--v) is %d \n",--v);


return (0);

}
 

