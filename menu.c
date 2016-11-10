/*
student name: xitiz basnet
subject: fundamentals of programming languages
roll no:28
program:write menu based c program to print as following. 
lab no: 13
date:Nov10,2016
*/

#include<stdio.h>
//#include<conio.h>
int main()
{
	
int z,x,i,count=0;
char d,c;

f:
    printf("**************************************************\n");
    printf("***              Choose any number             ***\n");
    printf("***            1. Check Odd/Even               ***\n");
    printf("***            2. Check Prime/not              ***\n");
    printf("***            3. Check vowel/consonant        ***\n");
    printf("***            4. Find ASCII Value             ***\n");
    printf("**************************************************\n");

printf("          Choose any number(1,2,3,4): ");
scanf("%d",&z);

switch(z)
{
case 1:
	printf("1. Check Odd/Even\n"); 
    printf("Enter any number(z):\n"); 
    scanf("%d",&z); 

    if(z%2==0) 
    printf("Your number is even"); 

    else 
    printf("Your number is odd"); 
    goto f;
break;

case 2:
    printf("2. Check Prime/not:\n\n");
    printf("Enter any number(x): "); 
    scanf("%d",&x); 
    
for(i=1;i<=x;i++)
{
    if(x%1==0)
    count++;
}

if (count>2)
{
    printf("%d is not a prime number",x);
}
else
{
    printf("%d is a prime number",x);
}
goto f;
break;

case 3:
    printf("3. Check vowel/consonant:\n\n");
    printf("Enter any character: "); 
    scanf("%s",&d);
     
(d=='a'|| d== 'e' || d=='i' || d=='o' || d=='u' || d=='A' || d== 'E' || d=='I' || d=='O' || d=='U')?printf("It is a vowel\n"):printf("it is a consonant\n");
goto f;
break;

case 4:

 printf("4.ASCII Value\n");
    printf("Please Enter any character:\n");
    scanf("%s",&c);
    printf("The ASCII value of given character = %d",c);
goto f;
}
return 0;
}
