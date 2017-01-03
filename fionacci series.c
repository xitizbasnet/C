/*student name: xitiz basnet
subject: programming fundamentals
roll no: 26
program: program to display first n term of fibonacci series using while
lab no: 24
BCS Sem= 1st
date: 12/29/2016
*/
int main()
{
    int i=1,num,x=0,y=1,z=1;
    printf("program to display first n term of fibonacci series using while:\n");
    printf("Enter the number:\n");
    scanf("%d",&num);
        while(i<=num)
        {
            printf("%d\t",z);
            z=x+y;
            x=y;
            y=z;
            i++;
        }
return 0;
}
