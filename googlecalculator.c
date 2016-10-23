/* 
Student Name= xitiz basnet
Subject=Programming Fundamentals 
Roll No.=36
Program=simple calculator using switch and break case.
Lab No.=06
BCS Sem.=1st
Date=23 oct,2016
*/

// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *,/): \n");
    scanf("%c", &operator);

    printf("Enter first number(a): \n");
    scanf("%lf",&firstNumber);
    
    printf("Enter second number(b): \n");
    scanf("%lf",&secondNumber);

    switch(operator)
    {
        case '+':
            printf("The product of two number is %.1lf + %.1lf = %.1lf",firstNumber, secondNumber,firstNumber + secondNumber);
            break;

        case '-':
            printf("The subtract of two number is %.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("The multiply of two number is %.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("The divide of two number is %.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / firstNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
    }
