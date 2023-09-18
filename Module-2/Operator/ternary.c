// syntax: -  (condition) ? (true) : (false) ;
// WAP to find the negative or positive number using ternary(conditional) operator
#include<stdio.h>
int main() {
    float num;
    printf("Enter a floating point value:"); // to get the value
    scanf("%f", &num); //to store the value
    // Ternary operator
    (num > 0) ? (printf("%0.2f is positive number.", num)) : (printf("%f is negative number.", num));
    return 0;
}