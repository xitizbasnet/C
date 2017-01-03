/*student name: xitiz basnet
subject: programming fundamentals
roll no: 26
program: program to display first n term of fibonacci series using for-loop
lab no: 24
BCS Sem= 1st
date: 12/29/2016
*/
int main()
{
    int i,num,x=0,y=1,z=1;
    printf("program to display first n term of fibonacci series using for-loop:\n");
    printf("Enter the number:\n");
    scanf("%d",&num);
       for(i=1;i<=num;i++)
        {
            printf("%d\t",z);
            z=x+y;
            x=y;
            y=z;
        }
return 0;
}
