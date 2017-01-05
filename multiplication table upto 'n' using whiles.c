/*student Name: Xitiz Basnet
subject: Programming fundamentals
roll no: 26
program: Program to display multiplication table upto 'n' using whiles loop:
lab no: 24
BCS Sem= 1st
date: 1/5/2016
*/
#include<stdio.h>
int main()
{
 int x,i=1,j,mul;
 printf("Enter the number to be multiplied:\n");
 scanf("%d",&x);
    while(i<=x)
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


    return 0;
}
