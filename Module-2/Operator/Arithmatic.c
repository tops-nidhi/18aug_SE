/*
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    % -> Modulo
    //Unary Operator
    ++ -> Increment 
    -- -> Decrement
*/
//WAP to make arithmetic operator
#include<stdio.h>
int main()
{
    // declare variable
    int a, b;
    printf("Enter the value of the a: "); //to get the value
    scanf("%d%d", &a, &b); //to store the value
    // printf("Enter the value of the b: ");
    // scanf("%d", &b);
    printf("\nAddition = %d\nSubtraction = %d", a+b, a-b); //to make an addition
    printf("\nIncrement = %d", ++a); //to make an increment
    return 0;
}