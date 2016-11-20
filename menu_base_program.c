/*
student name: xitiz basnet
subject: fundamentals of programming languages
roll no:28
program:write a menu based program.
lab no: 12
date:Nov20,2016
*/
#include<stdio.h>
//#include<conio.h>
//#include<string.h>

int main()
{
	int x,lr,br,ll,bb,area,per;

    float a,b,h,atr;
    
    z:
    
printf("********************************************\n");
printf("**             Menu based program         **\n");
printf("**            1. Area of rectangle        **\n");
printf("**            2. Perimeter of rectangle   **\n");
printf("**            3.Area of trapezium         **\n");
printf("**            4. Exit                     **\n");
printf("********************************************\n");

printf("Enter a number from 1 to 4:\n");
scanf("%d",&x);

switch(x)
{
      case 1:
             printf("1. Area of rectangle\n");
             printf("Enter the length of rectangle(lr):\n");
             scanf("%d",&lr);
             printf("Enter the breadth of rectangle(br):\n");
             scanf("%d",&br);
             area = (lr * br);
             printf("Area of rectangle=\n%d\n\n",area);
			 goto z;         
			 break;
        
             
      case 2:
             printf("2. Perimeter of rectangle:\n");
             printf("Enter the length of rectangle(ll):\n");
             scanf("%d",&ll);
             printf("Enter the breadth of recrangle(bb):\n");
             scanf("%d",&bb);
             per = (2*(ll + bb));
             printf("Perimeter of rectangle=\n%d\n\n",per);
             goto z;          
             break;
    case 3:
            printf("3. Area of trapezium:\n");
            printf("Enter the first side of trapezium(a):\n");
            scanf("%f",&a);
            printf("Enter the second side of trapezium(b):\n");
            scanf("%f",&b); 
            printf("Enter the height of trapezium(h):\n");
            scanf("%f",&h);  
            atr = (1/2 * ((a + b) * h));
            printf("%f\n\n",atr);
            goto z; 
            break;
    case 4:
            printf("4.Exit\n");
            break;
    default:
            printf("Invalid number\n");
            printf("--------------\n");
            printf("Sorry user\n");
            printf("Next time\n\n");
            goto z;       
}           
return 0;
//getch();
}
