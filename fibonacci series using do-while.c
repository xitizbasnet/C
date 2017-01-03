/*student name: xitiz basnet
subject: programming fundamentals
roll no: 26
program: program to display first n term of fibonacci series using do-while
lab no: 24
BCS Sem= 1st
date: 12/29/2016
*/
int main()
{
    int num,i=1,x=0,y=1,z=1;
    printf("program to display first n term of fibonacci series using do-while:\n");
    printf("Enter the number:\n");
    scanf("%d",&num);
    do
     {
        printf("%d\t",z);
            z=x+y;
            x=y;
            y=z;
            i++;
     }
     while(i<=num);

return 0;
}

