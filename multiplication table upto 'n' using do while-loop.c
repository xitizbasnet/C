/*student Name: Xitiz Basnet
subject: Programming fundamentals
roll no: 26
program: Program to display multiplication table upto 'n' using do while-loop:
lab no: 24
BCS Sem= 1st
date: 1/5/2016
*/
#include<stdio.h>
int main()
{
 int x,i,j,mul;
 printf("Enter the number to be multiplied:\n");
 scanf("%d",&x);
do
    {
        j=1;
           while(j<=10)
           {
               mul=i*j;
               printf("%d\t",mul);
               j++;
           }
            printf("\n");
            i++;
    }
    while(i<=x);
    return 0;
}
